#include <stdio.h>

void sort_asc(int* arr, int l)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < l; i++)
    {

        for(j = i+1; j < l; j++)
        {
            if(arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sort_desc(int* arr, int l)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < l; i++)
    {

        for(j = i+1; j < l; j++)
        {
            if(arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int l, i;
    printf("Enter the length of array: ");
    scanf("%d", &l);

    int arr[l];
    printf("Enter the elements of array: \n");
    for(i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\nAscending order sorted: \n");
    sort_asc(arr, l);
    for(i =0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nDescending order sorted: \n");
    sort_desc(arr, l);
    for(i =0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
