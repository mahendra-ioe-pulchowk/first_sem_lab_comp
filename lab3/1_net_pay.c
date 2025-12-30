#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float price;
    float rate;

    printf("Item type: \n 1.National items \n 2.Foreign items \n");
    printf("Enter 1 or 2 (depending on type): ");
    scanf("%d", &choice);

    printf("Sales price: ");
    scanf("%f", &price);

    if(choice == 1)
        rate = 0.06;
    else if(choice == 2)
        rate = 0.13;
    else {
        printf("Please select between 1 or 2\n");
        return -1;
    }

    printf("Net payable amount (with %.0f %% tax): %.2f\n", rate * 100, price * (1+rate));

    return 0;
}
