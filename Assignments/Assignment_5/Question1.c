#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("Number is Even ");
    }
    else
    {
        printf("Number is Odd ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}