#include <stdio.h>
#include <stdbool.h>

int main()
{

   float price = 10.00;
   bool isStudent = false; // 10% discount
   bool isSinior = true;  // 20% discount

   // student = $9
   // senior = $8
   // student + sinior = $7

   if (isStudent) {
      if (isSinior) {
         printf("You get a student discount of 10% \n");
         printf("You get a sinior discount of 20% \n");
         price *= 0.7;
      } else
      {
         printf("You get a student discount of 10% \n");
         price *= 0.9;
      }
   } else {
      printf("You get a sinior discount of 20% \n");
      price *= 0.8;
   }

   printf("The price of a ticket is: $%0.2f", price);
   return 0;
}