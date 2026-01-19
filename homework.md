# C Home Works

## SOPPING CART PROGRAM

```c
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
   fgets(item, sizeof(item), stdin);
   item[strlen(item)-1]='\0';

   printf("What is the the price for each?:\n");
   scanf("%f", &price);
   printf("How many would you like?:\n");
   scanf("%d", &quantity);

   total=price*quantity;

   printf("You have bought %d %s\n", quantity, item);

   printf("%c%.2f", currency, total);


   return 0;
}
```

## MAD LIBS GAME

```c
#include <stdio.h>
#include <string.h>

int main()
{
   // MAD LIBS GAME

   char noun[50] = "";
   char verb[50] = "";
   char abjective1[50]="";
   char abjective2[50]="";
   char abjective3[50]="";

   printf("Enter an adjective (description): ");
   fgets(abjective1, sizeof(abjective1), stdin);
   abjective1[strlen(abjective1)-1]='\0';

   printf("Enter a noun (animal or person):");
   fgets(noun, sizeof(noun), stdin);
   noun[strlen(noun)-1]='\0';

   printf("Enter an adjective (description): ");
   fgets(abjective2, sizeof(abjective2), stdin);
   abjective2[strlen(abjective2)-1]='\0';

   printf("Enter a verb (ending w/ -ing): ");
   fgets(verb, sizeof(verb), stdin);
   verb[strlen(verb)-1]='\0';

   printf("Enter an adjective (description): ");
   fgets(abjective3, sizeof(abjective3), stdin);
   abjective3[strlen(abjective3)-1]='\0';

   printf("\nToday, I went to a %s zoo\n", abjective1);
   printf("In an exhibit, I saw a %s\n",  noun);
   printf("%s was %s and %s!\n", noun, abjective2, verb);
   printf("I was %s!\n", abjective3);

   return 0;
}
```

## CIRCLE CALCULATOR PROGRAM
```c
#include <stdio.h>
#include <math.h>

int main()
{

   // CIRCLE CALCULATOR PROGRAM

   double radius = 0.0;
   double area = 0.0;
   double serface = 0.0;
   double volume = 0.0;
   const double PI = 3.14159;

   printf("Enter the radius: ");
   scanf("%lf", &radius);

   area = PI * pow(radius, 2);
   serface = 4 * PI * pow(radius, 2);
   volume = (4.0/3.0) * PI * pow(radius, 3);

   printf("Area: %.2lfcm\n", area);
   printf("Surface area: %.2lfcm\n", serface);
   printf("Volume: %.2lfcm", volume);

   return 0;
}
```

## COMPOUND INTEREST CALCULATOR

```c
#include <stdio.h>
#include <math.h>

int main()
{
   // COMPOUND INTEREST CALCULATOR

   double principal = 0.0;
   double rate = 0.0;
   int years = 0;
   int timesCompounded = 0;
   double total = 0.0;

   printf("Compound Interest Calculator\n");

   printf("Enter the principal (p): ");
   scanf("%lf", &principal);

   printf("Enter the interest rate % (r): ");
   scanf("%lf", &rate);

   rate = rate / 100;

   printf("Enter the number of years (t): ");
   scanf("%d", &years);

   printf("Enter # of times componended per year (n): ");
   scanf("%d", &timesCompounded);

   total = principal * pow(1 + (rate / timesCompounded), timesCompounded * years );

   printf("After %d years, the total will be $%.2lf", years, total);

   return 0;
}
```

## 