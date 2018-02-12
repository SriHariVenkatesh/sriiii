#include<stdio.h>
int main()
{    
int a,b,c;
printf("Enter the first number");
scanf("%d",a);
printf("Enter the second number");
scanf("%d",&b);
for(c=a;c<=b;c++)
	{
		if(c%2==1)
		printf("%d",c);
	}
  return 0;
}
