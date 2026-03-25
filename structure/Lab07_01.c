#include <stdio.h>
#include <stdlib.h>

struct studentMarks {
    char name[50];
    char program[50];
    int roll;
    int marks[5];
};

int main(){

    char Continue = 'p';

    struct studentMarks students[10];
    int count, i = 0, j;

    while (Continue != 'e'){

        printf("Enter details of student %d\n",i+1);

        printf("Enter the name of student:");
        scanf(" %s",students[i].name);

        printf("Enter the roll of student:");
        scanf("%d",&students[i].roll);

        printf("Enter the program of student:");
        scanf(" %s",students[i].program);

        for (j = 0; j<5; j++){
            printf("Enter marks of subject %d:",j+1);
            scanf("%d",&(students[i].marks[j]));
        }

        printf("Enter e to exit (Any other to continue):");
        scanf(" %c",&Continue);

        i++;
    }

    count = i;

    for(i = 0; i<count; ++i){
        printf("Details of student %d:\n",i+1);

        printf("\nName of student : %s",students[i].name);
        printf("\nProgram of student : %s",students[i].program);
        printf("\nRoll of student : %d",students[i].roll);


        for (j = 0; j<5; j++){
            printf("\nMarks of subject %d: %d",j,(students[i].marks[j]));
        }
    }

    system("pause");
    return 0;

}

