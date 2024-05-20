#include <stdio.h>

int main(void) {
    int c = -2;
    int n = 64 << c;
    printf("64 << -1 is %d", n);
    return 0;
}