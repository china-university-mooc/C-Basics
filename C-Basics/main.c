#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int a, b, c;
    int min, mid, max;
    int n1, n2;
    int count = 1;
    do {
        a = num%10;
        b = num/100;
        c = (num - a - b*100)/10;
        if (a > b) {
            max = a;
            min = b;
        } else {
            max = b;
            min = a;
        }
        if (c > max) {
            mid = max;
            max = c;
        } else if (c < min) {
            mid = min;
            min = c;
        } else {
            mid = c;
        }
        
        n1 = max*100 + mid*10 + min;
        n2 = min*100 + mid*10 + max;
        num = n1 - n2;
        printf("%d: %d - %d = %d\n", count, n1, n2, num);
        count++;
    } while (num != 495);
    
    return 0;
}
