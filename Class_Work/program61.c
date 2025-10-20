// to display separate Digits of number

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    printf("---------------------------------------\n");
    printf("Original value of given number is: %d\n", iNo);

    while (iNo != 0)
    {
        printf("---------------------------------------\n");

        iDigit = iNo % 10;
        printf("iDigit is: %d\n", iDigit);

        iNo = iNo / 10;
        printf("iNo is: %d\n", iNo);
    }
    printf("---------------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}