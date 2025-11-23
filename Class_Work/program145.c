#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR; // IMP    (IPTR is alias of int* )

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0]; // Important

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    int iRet = 0;

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

    // step 2 : Use the Memory
    iRet = Maximum(iPtr, iLength);

    printf("Maximum from the Numbers is : %d", iRet);

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}