#include <stdio.h>
#include<string.h>
void main()
{	
char str1[30],str2[30];
int n1,n2;
printf("Enter the string1:");
scanf("%s",str1);
printf ("Enter the string2:");
scanf("%s",str2);
n1=strlen(str1);
n2=strlen(str2);
	if(n1>n2)
	{
		printf ("\n%s",str1);
	}
	else if(n2>n1)
	{
		print ("\n%s",str2);
	}
	else
	{
		printf ("\n %s",str2);
	}
return 0;
}
