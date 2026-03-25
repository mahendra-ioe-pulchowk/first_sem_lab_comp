#include <stdio.h>
#include <memory.h>

int main()
{
    int M, N;

    printf("Enter M, N: ");
    scanf("%d, %d", &M, &N);
    int arr[N-M+1];

    int i = 0;
    int sum = 0;
    int* pSum = &sum;
    float avg;
    printf("Enter the elements: \n");
    for(i = M; i < N; i++)
    {
        scanf("%d", arr + i);
        *pSum += *(arr + i);
    }

    avg = (float) sum / (N-M+1);

    printf("\nSum: %d\n", *pSum);
    printf("Average: %.2f", avg);

    return 0;
}
