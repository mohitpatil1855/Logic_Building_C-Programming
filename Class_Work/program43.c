// Input : 12   2      output : true
// Input : 12   3      output : true
// Input : 12   12     output : true
// Input : 12   5      output : false
// Input : 12   7      output : false

#include <stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number :");
    scanf("%d", &iValue1);

    printf("Enter Second Number :");
    scanf("%d", &iValue2);

    if ((iValue1 % iValue2) == 0)
    {
        printf("It is completely Divisible..\n");
    }

    else
    {
        printf("It is Not Divisible..\n");
    }

    return 0;
}