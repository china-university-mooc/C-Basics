#include <stdio.h>
#include <stdlib.h>

const int MAX = 101;
void printPoly(int poly[], int len);
void printItem(int c, int e);

int main()
{
    int e, c;
    int poly1[MAX] = {0};
    int poly2[MAX] = {0};
    int poly[MAX] = {0};
    do {
        scanf("%d %d", &e, &c);
        poly1[e] = c;
    } while (e > 0);
    do {
        scanf("%d %d", &e, &c);
        poly2[e] = c;
    } while (e > 0);

    for (int i = 0; i < MAX; i++) {
        poly[i] = poly1[i] + poly2[i];
    }
    printPoly(poly, MAX);

    return 0;
}

void printPoly(int poly[], int len) {
    int first = 1;
    int hasItem = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (poly[i] != 0) {
            hasItem = 1;
            
            if (poly[i] < 0) {
                printf("-");
            } else {
                if (!first) {
                    printf("+");
                }
            }
            
            if (first) {
                first = 0;
            }
            
            printItem(poly[i], i);
        }
    }
    if (!hasItem) {
        printf("0");
    }
    printf("\n");
}

void printItem(int c, int e) {
    c = abs(c);
    if (c == 0) {
        printf("0");
    } else if (c == 1 && e == 0) {
        printf("1");
    } else {
        if (c > 1) {
             printf("%d", c);
        }
        
        if (e == 1) {
            printf("x");
        } else if (e > 1) {
            printf("x%d", e);
        }
    }
}
