#include <stdio.h>
#include <stdlib.h>

int findMaxCol(int matrix[][100], int len, int r);
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
        int maxCol = findMaxCol(matrix, n, i);
        if (colMin(matrix, n, i, maxCol)) {
            printf("%d %d\n", i, maxCol);
            find = 1;
        }
    }
    
    if (!find) {
        printf("NO\n");
    }

    return 0;
}

int findMaxCol(int matrix[][100], int len, int r) {
    int maxCol = 0;
    for (int j = 0; j < len; j++) {
        if (matrix[r][j] > matrix[r][maxCol]) {
            maxCol = j;
        }
    }
    return maxCol;
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

