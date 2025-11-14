#include <stdio.h>
#include <stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int icnt = 0, iCntOdd = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] % 2 == 1)
        {
            iCntOdd++;
        }
    }

    return iCntOdd;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements :\n ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr) // Industrial way of coding
    {
        printf("Unable to allocate memory\n ");
        return -1;
    }

    printf("Enter the elements :\n ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountOdd(ptr, iLength);

    printf("Odd numbers in Array is : %d", iRet);

    free(ptr);

    return 0;
}
