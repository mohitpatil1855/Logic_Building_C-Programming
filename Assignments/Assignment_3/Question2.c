#include <stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) + (iCnt % 2) == 0)
        {
            printf("%d  ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
