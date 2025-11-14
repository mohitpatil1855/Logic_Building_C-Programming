#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Chk11Present(int Arr[], int iSize)
{

    int icnt = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] == 11)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int iLength = 0, iCnt = 0;
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

    bRet = Chk11Present(ptr, iLength);

    if (bRet == true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }
    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}