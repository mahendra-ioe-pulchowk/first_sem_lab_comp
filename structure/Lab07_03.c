#include <stdio.h>
#include <stdlib.h>

struct height {
    int ft;
    int in;
};

int main(){

    struct height a,b;

    printf("Enter the height of first person in ft and inches:");
    scanf("%d %d",&a.ft,&a.in);

    printf("Enter the height of second person in ft and inches:");
    scanf("%d %d",&b.ft,&b.in);

    int difference = (b.ft-a.ft)*12 + b.in - a.in;
    struct height diff;
    diff.ft = difference/12;
    diff.in = difference%12;

    printf("The difference in their height is %d ft %d inches.\n",diff.ft,diff.in);



    (a.ft>b.ft)? printf("First person is taller.\n") :
        ((b.ft>a.ft) ? printf("Second person is taller.\n") :
         ((a.in>b.in)? printf("First person is taller.\n") :
          (b.in>a.in)? printf("Second person is taller.\n"):
         printf("Both are equally tall.\n")));



    system("pause");
    return 0;

}
