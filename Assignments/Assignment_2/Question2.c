#include <stdio.h>

void Accept(int iNo)
{

    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}