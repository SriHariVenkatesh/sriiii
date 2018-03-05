
#include <stdio.h>
void main() {
    int i = 65;
    int k = 120;
    printf (" Value of i=%d k=%d before swapping", i, k);
     i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf ("\nValue of i=%d k=%d after swapping", i, k);

    
}
