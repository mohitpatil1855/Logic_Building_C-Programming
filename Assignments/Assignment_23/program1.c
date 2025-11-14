#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ChkNoPresent(int Arr[], int iSize, int iNum)
{

    int icnt = 0;
    int CntNum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] == iNum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements in Array :\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr) // Industrial way of coding                 //IMP
    {
        printf("Unable to allocate memory\n ");
        return -1;
    }

    printf("Enter %d elements :\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the number you want to check in Array :\n");
    scanf("%d", &iNo);

    bRet = ChkNoPresent(ptr, iLength, iNo);

    if (bRet == true)
    {
        printf("%d is Present", iNo);
    }
    else
    {
        printf("%d is Absent", iNo);
    }

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}