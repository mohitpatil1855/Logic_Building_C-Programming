#include <stdio.h>

void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d  ", iCnt);
        }
    }
}

// Time Complexeity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    PrintEvenNumbers(iValue);

    return 0;
}