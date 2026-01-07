#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q, a, b;
    int sum = 0;
    printf("Enter the range: ");
    scanf("%d, %d", &a, &b);

    printf("Enter the number to be divisible by, to not be divisible by: ");
    scanf("%d, %d", &p, &q);

    // do loop
    int i = a;
    do {
        if(i % p == 0 && i % q != 0 && i % 2 != 0) {
            sum += i;
        }
        i++;
    }while(i <= b);
    printf("Do While output sum: %d\n", sum);

    // while loop
    sum = 0;
    i = a;
    while(i <= b) {
        if(i % p == 0 && i % q != 0 && i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("While output sum: %d\n", sum);

    sum = 0;
    for(i = a; i <= b; i++) {
        if(i % p == 0 && i % q != 0 && i % 2 != 0) {
            sum += i;
        }
    }

    printf("For output sum: %d\n", sum);


    system("pause");
    return 0;
}
