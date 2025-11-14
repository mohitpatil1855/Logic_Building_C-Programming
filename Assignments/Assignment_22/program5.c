#include <stdio.h>
#include <stdlib.h>

int CntNoFrequency(int Arr[], int iSize, int iNum)
{

    int icnt = 0;
    int CntNum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] == iNum)
        {
            CntNum++;
        }
    }
    return CntNum;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iNo = 0;

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

    iRet = CntNoFrequency(ptr, iLength, iNo);
    printf("Frequency of %d is : %d\n", iNo, iRet);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}