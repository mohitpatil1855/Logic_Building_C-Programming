#include <stdio.h>

void Print_numbers(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d  ", iCnt);
    }
}

// Time Complexeity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    Print_numbers(iValue);

    return 0;
}