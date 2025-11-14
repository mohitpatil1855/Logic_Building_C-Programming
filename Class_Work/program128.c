#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)
{
    int icnt = 0, iSum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        iSum += Arr[icnt];
    }

    return iSum;
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

    iRet = Summation(ptr, iLength);

    printf("Summation of Array is : %d", iRet);

    free(ptr);

    return 0;
}
