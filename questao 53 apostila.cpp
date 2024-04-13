#include <stdio.h>

int main() {
    float a, b;
    int anos;
    
    anos = 0;
    a = 5000000;
    b = 7000000;
    
    while (a < b) {
        a *= 1.03;
        b *= 1.02;
        anos++;
    }
    
    printf("%d\n", anos);
    
    return 0;
}