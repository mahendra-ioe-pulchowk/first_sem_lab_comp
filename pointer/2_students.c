#include <stdio.h>

typedef struct {
    char name[28];
    int roll;
} student;

void input(student* arr, int len)
{
    int i;
    char n[30];
    int r;
    printf("\n\nInput Student Details\n\n");
    for(i = 0; i < len; i++)
    {
        printf("Name: "); scanf("%s", &arr[i].name);
        printf("Roll: "); scanf("%d", &arr[i].roll);
    }
}

void output(student* arr, int len)
{
    int i;
        printf("\n\nOutput Student Details\n\n");
    for(i = 0; i < len; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Roll: %d\n", arr[i].roll);
    }
}

int main()
{
    int n;
    printf("Number of Students: ");
    scanf("%d", &n);

    student stds[n];
    input(stds, n);
    output(stds, n);

    return 0;
}

