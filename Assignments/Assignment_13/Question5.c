#include <stdio.h>

int PrintSumOfEvenNums(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

// Time Complexeity : O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet = PrintSumOfEvenNums(iValue);

    printf("Sum of Even Natural numbers is : %d", iRet);

    return 0;
}