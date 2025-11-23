#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR; // IMP    (IPTR is alias of int* )

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return (iCount);
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;
    int iValue = 0;

    printf("Enter the number of Elements : ");
    scanf("%d", &iLength);

    // Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr) // IMP
    {
        printf("Unable to allocate memory..");
        return -1;
    }

    printf("Enter Elements of Array :- \n ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d :", iCnt + 1);
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the value whose frequency has to be calculated : ");
    scanf("%d", &iValue);

    // step 2 : Use the Memory
    iRet = FrequencyCalculate(iPtr, iLength, iValue);

    printf("Frequency of %d is : %d\n", iValue, iRet);

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}