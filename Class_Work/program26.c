#include <stdio.h>

// Dynamic Function

void Display(int iFrequency)
{

    int iCnt = 0;

    if (iFrequency < 0)                            // Filter
    {
        printf("Invalid Input\n");
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...!\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the Frequency : \n");
    scanf("%d", &iCount);

    Display(iCount);

    return 0;
}
