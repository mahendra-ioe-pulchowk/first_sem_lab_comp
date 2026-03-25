#include <stdio.h>
#include <stdlib.h>

struct college {
    char name[50];
    char location[50];
    struct estDate{
        int year;
        int month;
        int day;
    } e;
};

int main(){

    struct college colleges[10];
    int i, j, n=1;

    for(i=0;i<n;i++){

        printf("Enter details of college %d\n",i+1);

        printf("Enter the name of college:");
        scanf(" %s",colleges[i].name);

        printf("Enter the location of student:");
        scanf(" %s",colleges[i].location);


        printf("Enter year of establishment:");
        scanf("%d",&(colleges[i].e.year));

        printf("Enter month of establishment:");
        scanf("%d",&(colleges[i].e.month));

        printf("Enter day of establishment:");
        scanf("%d",&(colleges[i].e.day));

    }



    for(i = 0; i<n; ++i){
        printf("Details of college %d:\n",i+1);

        printf("\nName of college : %s",colleges[i].name);
        printf("\nLocation of college : %s",colleges[i].location);
        printf("\nEstablishment Date of college : %d/%d/%d\n",colleges[i].e.year,colleges[i].e.month,colleges[i].e.day);


    }

    system("pause");
    return 0;

}
