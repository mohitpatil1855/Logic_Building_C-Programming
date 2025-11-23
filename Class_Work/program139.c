#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR; // IMP    (IPTR is alias of int* )

//   < O(N)   //Time complexity
void LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, i = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        i++;

        if (Arr[iCnt] == iNo)
        {
            printf("  present in the data\n");
            break;
        }
       
    }
    

    printf("Time : %d", i);
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the number to search : ");
    scanf("%d", &iValue);

    // step 2 : Use the Memory
    LinearSearch(iPtr, iLength, iValue);

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}