#include <stdio.h>


int main()
{
    unsigned int n = 8;
    int res = 2;

    int nbits = sizeof(int) * 8;
    int j = 2;
    for(j = 2; j <= 128; j*= 2)
    {

        unsigned int i = nbits;
        for(i = 0; i < nbits; i++)
        {
            if((j >> i) == 1)
            {
                break;
            }
        }

        printf("Num : %d\t", j);
        printf("Res : %d\n", (~j & ((~0U) >> (nbits-i-1))));


    }
}
