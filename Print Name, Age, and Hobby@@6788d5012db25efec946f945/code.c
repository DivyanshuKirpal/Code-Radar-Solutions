#include <stdio.h>
int main() {
    char name[500000], hobby[500000];
    int age;
    scanf("%s %d", name, &age);
    scanf(" %[^\n]", hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}