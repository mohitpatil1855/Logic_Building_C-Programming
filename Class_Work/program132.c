#include <stdio.h>
#include <stdlib.h>

float Average(int Arr[], int iSize)
{
    int icnt = 0, iSum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        iSum += Arr[icnt];
    }

    return ((float)iSum / (float)iSize); // Explicit TypeCasting
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

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

    fRet = Average(ptr, iLength);

    printf("Average of elements is : %f", fRet);

    free(ptr);

    return 0;
}
