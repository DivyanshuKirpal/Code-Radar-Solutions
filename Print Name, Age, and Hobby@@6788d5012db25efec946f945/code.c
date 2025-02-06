#include <stdio.h>
int main() {
    char name[5000000], hobby[5000000];
    int age;
    scanf("%s %d", name, &age);
    scanf(" %[^\n]", hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}