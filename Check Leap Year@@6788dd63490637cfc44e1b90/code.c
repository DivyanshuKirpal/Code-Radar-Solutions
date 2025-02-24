#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 400 == 0 || (num % 4 == 0 && num % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
    return 0;
}