#include<stdio.h>
main()
{
int a[10];
int n,i;
printf("Enter size of array: ");
scanf("%d", &n);
for(i=0;i<n;i++)
 {
  printf("\nEnter the value of a:");
  scanf("%d",&a[i]);
  printf("\n%d\t%d",a[i],i);
 }
return 0;
}
