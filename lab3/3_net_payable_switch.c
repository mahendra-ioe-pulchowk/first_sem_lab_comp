#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item_type;
    float sales_price, tax, net_amt;

    printf("Select the type of item:\n");
    printf("1. Grocery items\n");
    printf("2. Cosmetics items\n");
    printf("3. Clothing items\n");
    printf("4. Liquor items\n");
    printf("Enter item type: ");
    scanf("%d", &item_type);

    switch(item_type)
    {
    case 1:
        tax = 0.1;
        break;
    case 2:
        tax = 0.15;
        break;
    case 3:
        tax = 0.2;
        break;
    case 4:
        tax = 0.24;
        break;
    default:
        return -1;
        break;
    }


    printf("Enter the sales price: ");
    scanf("%f", &sales_price);

    net_amt = sales_price * (1 + tax);
    if(net_amt > 6000)
        net_amt *= 0.98;

    printf("Net payable amount: %.2f\n", net_amt);
    return 0;
}
