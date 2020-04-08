#include <stdio.h>

int main()
{
    char c;
    int first = 1;
    scanf("%c", &c);
    while(c != '.') {
        int len = 0;
        while (c != ' ' && c != '.') {
            scanf("%c", &c);
            len++;
        }
        if (first) {
            first = 0;
        } else {
            printf(" ");
        }
        printf("%d", len);
        while (c == ' ') {
            scanf("%c", &c);
        }
    }
    printf("\n");
    
    return 0;
}
