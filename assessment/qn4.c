#include<stdio.h>
int main()
{
int n,j,flag;
for(n=2;n<=1000;n++){
flag=1;
for(j=2;j<=n/2;j++){
if(n%j==0){
flag=0;
break;
}
}
if(flag==1)
printf("%d ",n);
}
return 0;
}

