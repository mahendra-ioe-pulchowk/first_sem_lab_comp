#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;

    int arr[n][n];
    char* temp;

    int i,j,k;
    printf("Enter the Elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
                scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    int sum = 0;

    for(i = 0; i < n; i++) {
        sum += arr[i][i] + arr[i][n-i-1];
    }

    int num_of_digit=0;
    int sum2 = sum;
    int arm_sum = 0;

    while(sum2 > 0) {
        sum2 /= 10;
        num_of_digit++;
    }

    sum2 = sum;
    while(sum2 > 0) {
        int rem = sum2 % 10;
        int powered = rem;
        for(i = 0; i < num_of_digit-1; i++)
            powered *= rem;

        arm_sum += powered;
        sum2 /= 10;
    }


    printf("sum : %d\n", sum);
    printf("armstrong sum : %d \n", arm_sum);
    if(arm_sum == sum) {
        printf("It is armstrong number\n");
    } else {
    printf("It isn't armstrong number\n");
    }
}
