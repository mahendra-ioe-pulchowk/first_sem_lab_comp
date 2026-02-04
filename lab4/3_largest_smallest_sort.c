#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array n : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements of the array: \n");
    int i , j;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int smallest = arr[0];

    for(i = 0; i < n; i++)
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        else if(arr[i] < smallest)
        {
            smallest = arr[i];
        }

    printf("\n\nSmallest: %d", smallest);
    printf("\nLargest : %d", largest);

    int size = n;
    for(i = 0; i < size; i++)
    {
        for(j = i; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nAscending Order : \n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\nDescending Order: \n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[size-1 - i]);

}
