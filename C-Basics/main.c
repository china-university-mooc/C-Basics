#include <stdio.h>
#include <string.h>

char* getSplitN(char* str, char c, int n);
int calCheckSum(char* str);
int getCheckSum(char* str);

int main()
{
    char str[1000];
    scanf("%s", str);
    int h, m, s;
    while(strcmp("END", str) != 0) {
        if (strncmp("$GPRMC", str, 6) == 0
            && getSplitN(str, ',', 2)[0] == 'A'
            && getCheckSum(str) == calCheckSum(str)) {
            h = (str[7]-'0')*10+(str[8]-'0');
            h = (h + 8) % 24;
            m = (str[9]-'0')*10+(str[10]-'0');
            s = (str[11]-'0')*10+(str[12]-'0');
        }

        scanf("%s", str);
    }
    printf("%02d:%02d:%02d\n", h, m, s);
    
    return 0;
}

void printTime(char* str) {
    int h = (str[7]-'0')*10+(str[8]-'0');
    h = (h + 8) % 24;
    int m = (str[9]-'0')*10+(str[10]-'0');
    int s = (str[11]-'0')*10+(str[12]-'0');
    printf("%02d:%02d:%02d\n", h, m, s);
}

char* getSplitN(char* str, char c, int n) {
    while (n--) {
        str = strchr(str, c);
        str++;
    }
    return str;
}

int calCheckSum(char* str) {
    int sum = 0;
    for (int i = 1; i < strlen(str) - 3; i++) {
        sum ^= str[i];
    }
    sum %= 65536;
    return sum;
}

int hexToValue(char c) {
    if (c >= 'A') {
        return c - 'A' + 10;
    } else {
        return c - '0';
    }
}

int getCheckSum(char* str) {
    char* p = strchr(str, '*');
    int sum = 0;
    p++;
    for (; *p != '\0'; p++) {
        sum = sum * 16 + hexToValue(*p);
    }
    return sum;
}
