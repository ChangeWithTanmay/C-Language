#include <stdio.h>

int main()
{
   // WEIGHT CONVERTER PROGRAM

   int choice = 0;

   float pounds = 0.0f;
   float kilograms = 0.0f;

   printf("Weigth Conversion Calculator\n");
   printf("1. Kilograms to Pounds\n");
   printf("2. Pounds to kilograms\n");
   printf("Enter your choice (1 or 2): ");
   scanf("%d", &choice);

   if(choice == 1){
      // Kilogram to pounds
      printf("Enter the weight in Kilogram: ");
      scanf("%f", &kilograms);
      pounds = kilograms * 2.20462;
      printf("%.2f kilogram is equal to %.2f pounds\n", kilograms, pounds);
   }
   else if (choice == 2)
   {
      // Pounds to Kilograms
      printf("Enter the weight in pounds: ");
      scanf("%f", &pounds);
      kilograms = pounds / 2.20462;
      printf("%.2f pounds is equal to %.2f kilogram\n", pounds, kilograms);
   } else{
      printf("Invalid choose, Please enter 1 or 2");
   }
   

   return 0;
}