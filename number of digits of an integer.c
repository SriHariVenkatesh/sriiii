#include <stdio.h>
int main()
{
    int a;
    int count = 0;
    clrscr();

    printf ("Enter an integer: ");
    scanf ("%lld", &a);

    while (a != 0)
    {
       
        a /= 10;
        ++count;
    }

    printf ("Number of digits: %d", count);
    getch();
   
    return 0;
   
}
