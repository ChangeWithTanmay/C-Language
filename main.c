#include <stdio.h>
#include <string.h>

int main()
{
   // SOPPING CART PROGRAM

   char item[50]="";
   float price = 0.0;
   int quantity=0;
   char currency='$';
   float total=0.0f;

   printf("What item would you like to buy?:\n");
   getchar();
   fgets(item, sizeof(item), stdin);
   item[strlen(item)-1]='\0';

   printf("What is the the price for each?:\n");
   scanf("%f", &price);
   printf("How many would you like?:\n");
   scanf("%d", &quantity);

   total=price*quantity;

   printf("Total: %.2f%c", total, currency);
   

   return 0;
}