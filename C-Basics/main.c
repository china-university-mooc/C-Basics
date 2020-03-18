#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int a = num % 10;
    num /= 10;
    int b = num % 10;
    num /= 10;
    int c = num % 10;
    
    int out = a * 100 + b * 10 + c;

    printf("%d\n", out);
}
