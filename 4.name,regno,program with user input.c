#include <stdio.h>
int main()
{
    char name[50], program[50];
    int regno;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your register no: ");
    scanf("%d", &regno);
    printf("Enter your program: ");
    scanf("%s", program);
    return 0;
}
