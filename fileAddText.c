#include<stdio.h>

int main(){

    FILE *fb;
    fb=fopen("student.txt", "w");
    if (fb==NULL)
    {
        printf("File error");
        return 1;
    }

    fprintf(fb, "Hello master\nHello Tanmay");

    fclose(fb);
    
    return 0;
}