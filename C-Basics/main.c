#include <stdio.h>

void printSpell(int digit) {
    switch (digit) {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
    }
}

int getDivisor(int num) {
    int divisor = 1;
    while (num  > 9) {
        divisor *= 10;
        num /= 10;
    }
    return divisor;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (num < 0) {
        printf("fu ");
        num = -num;
    }

    int divisor = getDivisor(num);
    while (divisor > 0) {
        int digit = num / divisor;
        printSpell(digit);
        if (divisor > 9) {
            printf(" ");
        }
        num %= divisor;
        divisor /= 10;
    }
    printf("\n");
    
    return 0;
}
