#include<stdio.h>
int main()
{
int B,A,D,i,sum=0;
scanf("%d %d %d",&B,&A,&D);
for(i=B;i>1;i--)
{
sum=sum+(A+(B-1)*D);
}
printf("%d",sum);
return 0;
}
