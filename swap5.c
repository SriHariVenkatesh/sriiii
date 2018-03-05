#include<stdio.h>
int main()
{ 
int a,b; 
a=10,b=12;
printf ("Before swap a=%d b=%d\n",a,b);
b=b^a;
a=b^a;
b=b^a;
printf ("After swap a=%d b=%d",a,b);
return 0;
}swap5
