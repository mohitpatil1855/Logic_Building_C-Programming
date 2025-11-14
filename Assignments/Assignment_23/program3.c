#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iSize, int iNum)
{

    int icnt = 0;
    int CntNum = 0;
    int ChkOcc = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] == iNum)
        {
            ChkOcc= icnt;
        }
    }
    return ChkOcc;
}

int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;
    int *ptr = NULL;
    int iRet = 0;
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

    iRet = LastOcc(ptr, iLength, iNo);

    printf("Last Occurence of %d in Array Index is : %d\n", iNo, iRet);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}