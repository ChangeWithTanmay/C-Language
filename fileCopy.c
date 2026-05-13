#include <stdio.h>

int main()
{

    FILE *fb, *terget;
    fb = fopen("student.txt", "r");
    if (fb == NULL)
    {
        printf("File eror...");
        return 1;
    }

    terget = fopen("fileCopy.txt", "w");
    if (terget == NULL)
    {
        printf("File eror...");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fb)) != EOF){
        fputc( ch, terget);
    }

    fclose(terget);
    fclose(fb);

    printf("File close successfully");
     return 0;
}