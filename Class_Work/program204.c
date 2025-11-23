// to open the file and reading the data

#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50];

    printf("Enter the name of file :");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open..");
        return -1;
    }

    iRet = read(fd,Data,5);        //reading the data

    printf("%d bytes gets successfully read\n",iRet);

    close(fd);

    return 0;
}