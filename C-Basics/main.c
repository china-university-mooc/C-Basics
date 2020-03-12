#include <stdio.h>

int main() {
    int answer, n;
    scanf("%d %d", &answer, &n);
    
    int guess;
    int count = 0;
    while(count < n) {
        scanf("%d", &guess);
        count++;
        if (guess < 0 || guess == answer) {
            break;
        }
        if (guess < answer) {
            printf("Too small\n");
        } else {
            printf("Too big\n");
        }
    }
    
    if (guess == answer) {
        if (count == 1) {
            printf("Bingo!\n");
        } else if (count <= 3) {
            printf("Lucky You!\n");
        } else {
            printf("Good Guess!\n");
        }
    } else {
        printf("Game Over\n");
    }
    
    return 0;
}
