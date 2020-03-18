#include <stdio.h>

int main() {
    int bjt;
    scanf("%d", &bjt);
    int bjtH = bjt / 100;
    int bjtM = bjt % 100;
    
    int utcH = bjtH - 8;
    if (utcH < 0) {
        utcH += 24;
    }
    int utc = utcH * 100 + bjtM;
    
    printf("%d\n", utc);
    return 0;
}
