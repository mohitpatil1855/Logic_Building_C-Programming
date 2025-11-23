// to create file with user defined name

#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of File yu want to create : \n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if (fd == -1)
    {
        printf("unable to create file..");
    }

    else
    {
        printf("File Successfully created with FD :%d\n", fd);
    }

    return 0;
}