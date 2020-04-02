#include <stdio.h>
#include <stdlib.h>

int rowMax(int matrix[][100], int len, int r, int c);
int colMin(int matrix[][100], int len, int r, int c);

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[100][100] = {0};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int find = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (rowMax(matrix, n, i, j) && colMin(matrix, n, i, j)) {
                printf("%d %d\n", i, j);
                find = 1;
            }
        }
    }
    
    if (!find) {
        printf("NO\n");
    }

    return 0;
}

int rowMax(int matrix[][100], int len, int r, int c) {
    int res = 1;
    int max = matrix[r][c];
    for (int i = 0; i < len; i++) {
        if (matrix[r][i] > max) {
            res = 0;
        }
    }
    return res;
}

int colMin(int matrix[][100], int len, int r, int c) {
    int res = 1;
    int min = matrix[r][c];
    for (int i = 0; i < len; i++) {
        if (matrix[i][c] < min) {
            res = 0;
        }
    }
    return res;
}

