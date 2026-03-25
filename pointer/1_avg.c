#include <stdio.h>


int main()
{
    int M, N;
    int *pM = &M, *pN = &N;

    printf("Enter M, N: ");
    scanf("%d, %d", pM, pN);

    int i, sum = 0;
    int* pSum = &sum;
    float avg;

    for(i = M; i <= N; i++)
        *pSum += i;

    avg = (float) *pSum / (N-M+1);


    printf("Sum : %d\n", sum);
    printf("Average : %.2f", avg);

    return 0;
}
