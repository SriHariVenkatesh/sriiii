#include<stdio.h>
int main()
 {
  char string[50];
  int i,cin=0;
  printf(" enter the data");
  scanf("%s",&string[i]);
while(string[i]!='\0')
 {
   if(string[i]=='.')
  {
  cin+=1;
 }
 i++;
 }
 printf ("%d",cin);
return 0;
}
