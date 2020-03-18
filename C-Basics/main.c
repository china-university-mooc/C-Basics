#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Zero Equation\n");
            } else {
                printf("Not An Equation\n");
            }
        } else {
            printf("%0.2f\n", -c/b);
        }
    } else {
        if (d == 0) {
            printf("%0.2f\n", -b/(2*a));
        } else if (d > 0) {
            printf("%0.2f\n", (-b + sqrt(d))/(2*a));
            printf("%0.2f\n", (-b - sqrt(d))/(2*a));
        } else {
            if (b == 0) {
                printf("%0.2f+%0.2fi\n", b/(2*a), sqrt(-d)/(2*a));
                printf("%0.2f-%0.2fi\n", b/(2*a), sqrt(-d)/(2*a));
            } else {
                printf("%0.2f+%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
                printf("%0.2f-%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
            }
        }
    }
    
    return 0;
}
