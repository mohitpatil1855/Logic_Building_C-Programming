#include <stdio.h>

int factorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    for (iCnt = 2; iCnt <= iNo; iCnt++)
    {
        iFac = iFac * iCnt;
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

    iRet = factorial(iValue);

    printf("Factorial is : %d", iRet);

    return 0;
}