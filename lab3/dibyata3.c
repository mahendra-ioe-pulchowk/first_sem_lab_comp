#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b and c");
scanf("%d%d%d",&a,&b,&c);
if (a>c)
{
if (a>b)
{
printf("%d is the largest",a);
}
else
{
printf("%d is the largest",b);
}
}
else
{
printf("%d is the largest",c);
}
return 0;
}
