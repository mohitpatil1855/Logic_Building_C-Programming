// 1    *   2   *    3    *     4     *     5     *

#include <stdio.h>

void Display()
{
    int iCnt = 0;

    for (iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}