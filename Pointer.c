/*  Pointer.c - swap two number and return using pointer.
 */

#include <stdio.h>
 
void swap(int *, int *);
 
int main(void)
{
    int a = 22;
    int b = 11;
     
    printf("兩數交換以前.. a = %d, b = %d\n", a, b);
     
    swap(&a, &b);
     
    printf("兩數交換以後.. a = %d, b = %d\n", a, b);
     
    return 0;
}
 
void swap(int *aPtr, int *bPtr)
{
    int temp;
     
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}