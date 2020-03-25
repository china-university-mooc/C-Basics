#include <stdio.h>

int main() {
    int const limit = 200;
    int a;
    int b;
    int decimal[limit];
    
    scanf("%d/%d", &a, &b);

    int cnt = 0;
    int intCnt = 0;
    while (cnt < limit && a > 0) {
        if (a > b) {
            intCnt++;
        } else {
            a = a * 10;
        }
        decimal[cnt++] = a / b;
        a = a % b;
    }
    
    if (intCnt == 0) {
        printf("0");
    }
    for (int i = 0; i < cnt; i++) {
        if (i == intCnt) {
            printf(".");
        }
        printf("%d", decimal[i]);
    }
    printf("\n");
}
