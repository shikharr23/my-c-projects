#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    if (a++ > 5) {
        b--;
    } else {
        b++;
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}