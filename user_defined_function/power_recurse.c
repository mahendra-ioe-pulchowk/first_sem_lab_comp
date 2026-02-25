#include <stdio.h>

int power(int a, int b);

int main()
{
    int a,b;
    printf("Enter only positive number!!\n");
    printf("Enter base (a), exponent (b) : ");
    scanf("%d, %d", &a, &b);

    printf("a ^ b : %d", power(a, b));

}


int power(int a, int b)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a;

    return a * power(a, b - 1);
}
