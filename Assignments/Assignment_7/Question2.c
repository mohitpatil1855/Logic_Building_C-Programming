#include <stdio.h>

void PrintNum(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

//Time Complexity : O(N)


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    PrintNum(iValue);

    return 0;
}