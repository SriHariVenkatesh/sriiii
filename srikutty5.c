#include <stdio.h>
int main()
{
int i, n,first=0,next=1,sum;
clrscr();
printf ("enter series range:");
scanf("%d",&n);
printf ("fibonacci Series:");
for(i=0;i<n;i++)
{
printf ("\n%d",first);
sum=first+next;
first=next;
next=sum;
}
getch();
return 0;
}
