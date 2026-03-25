#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[50];
    float salary;
};

void sort(struct employee employees[], int n){

    struct employee temp;

    int i,j;

    for (i = 0; i<n; i++){
        for(j = 0; j<n-i-1 ; j++){

            if (employees[j].salary > employees[j+1].salary){

                strcpy(temp.name,employees[j].name);
                temp.salary = employees[j].salary;

                strcpy(employees[j].name,employees[j+1].name);
                employees[j].salary = employees[j+1].salary;

                strcpy(employees[j+1].name,temp.name);
                employees[j+1].salary=temp.salary ;
            }
        }
    }
}

int main(){

    struct employee employees[10];
    int i, j, n;

    printf("Enter number of employees:");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("Enter details of employee %d\n",i+1);

        printf("Enter the name of employee:");
        scanf(" %s",employees[i].name);

        printf("Enter the salary of employee:");
        scanf("%f",&employees[i].salary);
    }

    sort(employees,n);
    printf("Employees with salary in increasing order:\n");


    for(i = 0; i<n; ++i){
        printf("Details of employee %d:\n",i+1);

        printf("\nName of employee : %s\n",employees[i].name);
        printf("\Salary of employee : %f\n",employees[i].salary);
    }

    system("pause");
    return 0;

}

