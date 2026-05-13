#include <stdio.h>

int main()
{
    if (remove("fileCopy.txt") == 0)
    {
        printf("File deleted");
    }
    else
        printf("File deleted");
    return 0;
}