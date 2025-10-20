#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iFac = iFac * iCnt;
        }
    }
    return iFac;
}

//Time Complexity : O(N)

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial is : %d", iRet);

    return 0;
}