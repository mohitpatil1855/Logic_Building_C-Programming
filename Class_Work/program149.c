#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iValue1 = 11;
    int iValue2 = 21;

    printf("Before Swap : %d  %d\n", iValue1, iValue2);

    swap(&iValue1, &iValue2);

    printf("After Swap : %d  %d\n", iValue1, iValue2);

    return 0;
}