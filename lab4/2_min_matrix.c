#include <stdio.h>

int main()
{
    int arr[4][4];

    printf("Enter the numbers of array:\n");

    int i, j;
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);


    int min = arr[0][0];


    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            if(min > arr[i][j])
                min = arr[i][j];


    if (min % 2 == 1)
        for(i = 0; i < 4; i++)
            arr[i][i] = min;

    else
        for(i = 0; i < 4; i++)
            arr[i][3-i] = min;

    printf("Min : %d , %s\n", min, min % 2 == 1 ? "Odd" : "Even");
    printf("\n\nResult: \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }


}
