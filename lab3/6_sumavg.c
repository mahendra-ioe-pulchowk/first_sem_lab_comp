#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the numbers of input: ");
    scanf("%d", &n);

    bool neg_triggered;
    int num, count1 = 0, count2 = 0;
    int sum1 = 0, sum2 = 0;
    float avg1, avg2;

    printf("Enter the numbers:\n");

    int i,j,k;
    for(i = 0; i < n; i++) {
        printf("%d th num: ", i+1);
        scanf("%d", &num);
        if(num < 0) {
            neg_triggered = true;
            sum2 -= num;
            count2--;
        }

        if(!neg_triggered) {
            sum1 += num;
            count1++;
        }
        sum2 += num;
        count2++;
    }

    avg1 = (float)sum1 / (float)count1;
    avg2 = (float) sum2/ (float)count2;


    printf("Case 1: Sum %d\t\t Avg : %.2f\n", sum1, avg1);
    printf("Case 2: Sum %d\t\t Avg : %.2f\n", sum2, avg2);
    system("pause");
    return 0;
}
