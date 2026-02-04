#include <stdio.h>

int main() {
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Only positive integers are allowed, try again \n");
        return -1;
    }

    int rev_num = 0;
    int temp_num = num;
    int sum_digits = 0;
    int num_digits = 0;

    // Checking palindrome
    do {
        rev_num = rev_num * 10 + temp_num % 10;
        sum_digits += temp_num % 10;
        num_digits++;

        temp_num /= 10;
    } while(temp_num != 0);


    printf("\nResults:\n\n");
    // Assigning Q
    int Q = 0;
    if(rev_num == num){
        printf("%d : Palindrome\n", num);
        Q = num_digits;
    } else {
        printf("%d : Not Palindrome\n", num);
        Q = sum_digits;
    }
    printf("Q : %d\n", Q);

    // Checking prime or composite
    int is_prime = 0;

    if(Q == 0) {
        printf("0 is neither prime nor composite, try another number \n");
        return -1;
    } else if(Q == 1) {
        printf("1 is neither prime nor composite\n");
        printf("1st term of fibonacci series : %d\n", 0);
        goto b;
    } else if( Q == 2) {
        printf("2: Prime\n");
        printf("3rd term of fibonacci series %d\n", 1);
        return 0;
    }


    int i = 2;
    int R = 0;
    a:
        if(Q % i != 0 && i < Q){
            i++;
            goto a;
        } else if(i == Q) {
            is_prime = 1;
            goto b;
        } else {
            is_prime = -1;
            goto b;
        }

    b:
    if(is_prime == 0) {
        printf("%1st term of the fibonacci series : %d\n", Q, 0);
        return 0;
    } else if(is_prime == 1) {
        printf("%d : Prime\n", Q);
        R = Q + 1;
    }
    else {
        printf("%d : Composite\n", Q);
        R = Q - 1;
    }
    // Fibonacci series
    int a = 0, b = 1, c = 1;
    i = 3;
    while(i < R) {
        a = b;
        b = c;
        c = a + b;

        i++;
    }
    printf("%d th term of the fibonacci series : %d\n", R, c);
    return 0;
}
