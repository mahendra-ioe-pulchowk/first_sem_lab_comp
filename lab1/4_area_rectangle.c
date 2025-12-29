#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, breadth, area;

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Rectangle Area: %f\n\n", area);

    system("pause");
    return 0;
}
