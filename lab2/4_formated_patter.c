#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%%f\n");
    printf(" %10.0f\n", 3.14);
    printf(" %3c\n", 'C');
    printf(" %.2f\n", 3.14);
    printf(" %.2f%8d\n", 3.14, 17);
    system("pause");
    return 0;
}
