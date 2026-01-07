#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the numbers of input: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the numbers: ");

    int i,j,k;
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int sum1 = 0, sum2 = 0;
    float avg1 = 0, avg2 = 0;
    int n2 = 1;
    for(i = 0; i < n; i++) {
        if(nums[i] < 0) {
            break;
        }
        sum1 += nums[i];
        n2++;
    }
    if(n2 == 2) {
        n2 = 1;
    }
    avg1 = sum1 / n2;
    n2 = 0;
    for(i = 0; i < n; i++) {
        if(nums[i] < 0) {
            continue;
        }
        sum2 += nums[i];
        n2++;
    }

    if(n2 == 2) {
    n2 = 1;
    }
    avg2 = sum2 / n2;

    printf("Case 1: Sum , Avg : %d, %.2f ", sum1, avg1);
    printf("Case 2: Sum , Avg : %d, %.2f ", sum2, avg2);
    system("pause");
    return 0;
}
