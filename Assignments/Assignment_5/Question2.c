#include <stdio.h>

int MaxOfTwo(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is Maximum ", iNo1);
    }
    else
    {
        printf("%d is Maximum ", iNo2);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number :");
    scanf("%d", &iValue1);

    printf("Enter Second Number :");
    scanf("%d", &iValue2);

    MaxOfTwo(iValue1, iValue2);

    return 0;
}