#include<stdio.h>
#include<math.h>
int main()
{
int n,i,sum=0,org,count,rem;
printf("enter a number");
scanf("%d",&n);
org=n;
while(count!=0)
{
count++;
n/=10;
}
while(n!=0)
{
rem=n%10;
sum+=ceil(pow(rem,n));
n/=10;
}
if (sum=org)
{
printf("%d is an armstrong number",org);
}
else
{
printf("%d is not an armstrong number",sum);
}
return 0;
}
