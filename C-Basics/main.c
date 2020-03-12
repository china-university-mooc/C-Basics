#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int m, n;
    scanf("%d %d", &m, &n);
    
    
    int i, j, s;
    bool flag = false;
    for (i = m; i <= n; i++) {
        s = 1;
        for (j = 2; j <= i/2; j++) {
            if (i%j == 0) {
                s = s + j;
            }
        }
        if (s == i) {
            flag = true;
            printf("%d = 1", i);
            for (j = 2; j <= i/2; j++) {
                if (i%j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }
    if (!flag) {
        printf("None\n");
    }
    
    return 0;
}
