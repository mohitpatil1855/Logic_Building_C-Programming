#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR; // IMP    (IPTR is alias of int* )

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;

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
    ReverseDisplay(iPtr, iLength);

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}