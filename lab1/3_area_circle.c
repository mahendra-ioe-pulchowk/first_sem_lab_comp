#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.1415 * radius * radius;

    printf("Area: %f\n", area);

    system("pause");
    return 0;
}
