#include <stdio.h>
#include <stdbool.h>
   
int main(){

   bool isRunning = true;
   char response ='\0';

   while(isRunning){
      printf("You are Playing game\n");
      printf("Would you like to continue? (Y = yes, N = no): \n");
      scanf(" %c", &response);

      if(response != 'Y' && response != 'y'){
         isRunning = false;
      }
   }
   
   return 0;
}