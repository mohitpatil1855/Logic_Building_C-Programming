#include <stdio.h>

void chkNumber(int iNo)
{
    if (iNo >= 100)
    {
        printf("Large");
    }
    else if (iNo < 100 && iNo >= 50)
    {
        printf("Medium");
    }
    else
    {
        printf("Small");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    chkNumber(iValue);

    return 0;
}