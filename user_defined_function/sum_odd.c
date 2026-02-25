#include <stdio.h>

int calc_sum_odd1(int P, int Q, int a, int b);
void print_sum_odd2(int P, int Q, int a, int b);
void print_sum_odd3();
int calc_sum_odd4();

void ask_for_input(int* p, int* q, int*a, int*b);

int main()
{
    int p, q, a, b;
    printf("No: 1, Function with return type and argument\n");
    ask_for_input(&p, &q, &a, &b);

    printf("Sum : %d", calc_sum_odd1(p, q, a, b));

    printf("\n\nNo: 2, Function with no return type and with argument\n");
    print_sum_odd2(p, q, a, b);

    printf("\n\nNo: 3, Function with no return type and no argument\n");
    print_sum_odd3();

    printf("\n\nNo: 4, Function with return type and no argument\n");
    printf("Sum : %d\n\n", calc_sum_odd4());
}

int calc_sum_odd1(int P, int Q, int a, int b)
{
    int i;
    int sum = 0;
    for(i = a; i <= b; i++)
    {
        if(i%2 != 0 && i % P == 0 && i % Q != 0)
        {
            sum += i;
        }
    }
    return sum;
}
void print_sum_odd2(int P, int Q, int a, int b)
{
    int result = calc_sum_odd1(P, Q, a, b);
    printf("Sum : %d", result);

}
void print_sum_odd3()
{
    int p, q, a, b;
    ask_for_input(&p, &q, &a, &b);
    int result = calc_sum_odd1(p, q, a, b);
    printf("Sum : %d", result);

}
int calc_sum_odd4()
{
    int p, q, a, b;
    ask_for_input(&p, &q, &a, &b);
    int result = calc_sum_odd1(p, q, a, b);
    return result;
}



void ask_for_input(int* p, int* q, int*a, int*b)
{
    printf("Enter P (divisible by) : ");
    scanf("%d", p);
    printf("Enter Q (not divisible by) : ");
    scanf("%d", q);
    printf("Enter range [a, b] : ");
    scanf("%d, %d", a, b);
}
