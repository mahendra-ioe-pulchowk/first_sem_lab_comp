#include <stdio.h>
#include <stdlib.h>

int main() {
    int R = 0;
    int n = 0;
    //printf("Enter the number: ");
    //scanf("%d", &n);

    n = 86993421;

    int i = 0;
    int dig = 0;
    int sum = 0;
    // calculating sum
    while(i == 0) {
        dig = n % 10;
        sum += dig;
        if(n < 10) {
            if(sum < 10) {
                R = sum;
                i = -1;
            }
            n = sum;
            sum = 0;
            continue;
        }
        n /= 10;
    }

    printf("R : %d\n", R);

    i = 2;
    int prime_or_comp = 0; // 1 prime, -1 composite
    if(R == 0) {
     printf("0 is neither prime nor composite, try another number \n");
     prime_or_comp = 0;
     return -1;
    } else if( R == 1) {
        printf("1 is neither prime nor composite \n");
        prime_or_comp = 0;
        goto r;
    }
    else if(R == 2) {
        prime_or_comp = 1;
        goto q;
    }

    p:
        if(R % i != 0 && i < R) {
            i++;
            goto p;
        } else if( i == R ) {
            prime_or_comp = 1;
            goto q;
        } else {
            prime_or_comp = -1;
            goto q;
        }

    q:

    if(prime_or_comp == -1)
        printf("%d : Composite\n", R);
    else
        printf("%d : Prime\n", R);

    r:

    if(prime_or_comp == 0) {
        printf("%d th term of fibonacci series: %d\n", R, 0);
    }
    i = 2;
    if(prime_or_comp == -1) {
        int a = 0;
        int b = 1;
        int c = a + b;
        while(i < R - 1) {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        printf("%d th term of fibonacci series: %d\n", R - 1, c);
    }
    else if(prime_or_comp == 1) {
        int a = 0;
        int b = 1;
        int c = a + b;
        while(i < R + 1) {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        printf("%d th term of fibonacci series: %d\n", R + 1, c);
    }

    //system("pause");

}
