// to display separate Digits of number

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n", iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}