#include <stdio.h>

void CheckLeapYear(int Year)
{
    if (Year % 4 == 0)
    {
        printf("This year is a Leap Year");
    }
    else
    {
        printf("This year is Not a Leap Year");
    }
}

int main()
{
    int yr = 0;

    printf("Enter Year :");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}