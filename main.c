#include <stdio.h>

int main()
{
   FILE *fc;
   fc=fopen("student.txt", "w");
   if(fc==NULL){
      printf("File open error.\n");
      return;
   }
   printf("File open successfully.\n");

   fclose(fc);
   printf("Now File close successfully.");
   
   return 0;
}