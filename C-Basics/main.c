#include <stdio.h>

int main() {
    int const limit = 200;
    int a;
    int b;
    int decimal[limit];
    
    scanf("%d/%d", &a, &b);
    if (a > b) {
        return -1;
    }
    
    int cnt = 0;
    while (cnt < limit && a > 0) {
        decimal[cnt++] = a * 10 / b;
        a = a * 10 % b;
    }
    
    printf("0.");
    for (int i = 0; i < cnt; i++) {
        printf("%d", decimal[i]);
    }
    printf("\n");
}
