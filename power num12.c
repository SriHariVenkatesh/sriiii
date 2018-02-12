#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,result;
	printf("\n Enter the value of a:");
	scanf("%d",&a);
	printf("\n Enter the value of b:");
	scanf("%d",&b);
	printf("\n The power value is:");
	result=pow(a,b);
	printf("%d", result);
	return 0;
}
