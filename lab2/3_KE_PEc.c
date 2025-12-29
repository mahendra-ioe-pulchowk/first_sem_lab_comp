#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m, ke, pe;
    int h, v;
    float g = 9.8;

    printf("Enter mass, height and velocity : ");
    scanf("%f, %d, %d", &m, &h, &v);

    ke = 0.5 * m * v * v;
    pe = m * g * h;

    printf("Kinetic Energy: %.2f \nPotential Energy: %.2f \n", ke, pe);
    system("pause");
    return 0;
}
