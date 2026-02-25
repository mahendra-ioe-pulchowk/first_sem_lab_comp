#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int res =fib(n);
    if(res % 2 == 0)
        printf("%d : Even\n", res);
    else
        printf("%d : Odd\n", res);

    return 0;
}

int fib(int n)
{
    if(n == 1 || n == 0)
        return 0;
    if(n == 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);

}
