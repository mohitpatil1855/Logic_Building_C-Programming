#include <stdio.h>

void CheckNumberType(int iNo)
{
    if (iNo > 0)
    {
        printf("Entered Number is Positive ");
    }
    else if (iNo < 0)
    {
        printf("Entered Number is Negative ");
    }
    else
    {
        printf("Entered number is 0 ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    CheckNumberType(iValue);

    return 0;
}