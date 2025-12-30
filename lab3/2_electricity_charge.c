#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units;
    float charge;

    printf("Enter units: ");
    scanf("%d", &units);

    if(units <= 50)
        charge = 0.5 * units;
    else if(units <= 100)
        charge = 100 + 0.65 * (units - 50);
    else if(units <= 200)
        charge = 230 + 0.80 * (units - 100);
    else if(units > 200)
        charge = 390 + 1 * (units - 200);

    printf("Charge: %.2f\n", charge);
    return 0;
}
