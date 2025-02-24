#include <stdio.h>
int getNthBit(int num, int n) {
    return (num & (1 << n)) ? 1 : 0;
}
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int bit = getNthBit(num, n);
    printf("%d\n", bit);
    return 0;
}