#include <stdio.h>

int main()
{
    char c;
    int i;
    long l;
    long long li;
    float f;
    double d;
    long double ld;

    printf("Size of: \n");
    printf("\nchar : %d", sizeof(c));
    printf("\nint : %d", sizeof(i));
    printf("\nlong : %d", sizeof(l));
    printf("\nlong long : %d", sizeof(li));
    printf("\nfloat : %d", sizeof(f));
    printf("\ndouble : %d", sizeof(d));
    printf("\nlong double : %d", sizeof(ld));
    printf("\n\n");

    system("pause");
    return 0;
}
