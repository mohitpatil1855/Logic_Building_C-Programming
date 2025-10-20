#include <stdio.h>

void Display(int iNo, int iFrequency)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d  ", iNo);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number :");
    scanf("%d", &iValue1);

    printf("Enter Number :");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}