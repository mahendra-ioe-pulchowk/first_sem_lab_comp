#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender;
    int age;
    printf("Enter your gender (M/F): ");
    scanf("%c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello !!, You are %d years old and of gender %c\n\n", age, gender);


    system("pause");
    return 0;
}
