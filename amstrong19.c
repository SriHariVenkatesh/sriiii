#include <stdio.h>
 
int main()
{
int a,b,c,d,e;
printf ("Enter the number");
scanf ("%d",&a);
b=(a/100);
c=(a-(b*100))/10;
d=((a-b*100+c*10));
e=(b*b*b+c*c*c+d*d*d);
if(a==e)
printf ("its amstrong number");
else
printf ("its not amstrong number");
return 0;
}
