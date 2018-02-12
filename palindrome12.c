#include <stdio.h>
int main()
{
    int n, reversdInteger = 0, remainder, originalInteger;

    printf("Enter an integer");
    scanf("%d", &n);
    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversdInteger = reversdInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversdInteger)
        printf("%d Is a palindrome", originalInteger);
    else
        printf("%d Is not a palindrome", originalInteger);
    
    return 0;
}
