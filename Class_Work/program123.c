#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int icnt = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        printf("%d\n", Arr[icnt]);
    }
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements :\n ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}
