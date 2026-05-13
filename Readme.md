# C Learning

## variable
A reusable container for a value. Behaves as if it ware the value it contains.

- Types:
    - int
    - float
    - double
    - char
    - char[]
    - bool
- Use:
    ```c
    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);
    ```

```c
// int = whole numbers (4 bytes in modern system)

// float = single-precision decimal number (4 bytes)

// double = double-presision decimal number (8 bytes)

// char = single character (1 bytes)

// char[] = array of characters (size varies)

// bool = true or false (1 byte, requires, <stdbool.h>)
```


### Code
```c
#include<stdio.h>
#include <stdbool.h>

int main(){
    // variable = A reusable container for a value.
    //            Behaves as if it ware the value it contains.

    // int = whole numbers (4 bytes in modern system)
    // float = single-precision decimal number (4 bytes)
    // double = double-presision decimal number (8 bytes)
    // char = single character (1 bytes)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires, <stdbool.h>)


    

    // Programming //


    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    // Float store/contain before point(.) 6 values

    printf("Your gpa is %.2f\n", gpa); // 2.50
    printf("the price is $%.f\n", price); // 19.990000




    // dubble
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    printf("The value of pi is %lf\n", pi); // 3.141593
    // but
    printf("The value of pi is %.15lf\n", pi); // 3.141592653589790
    printf("The value of e is %.15lf\n", e); // 2.718281828459000
    


    char grade = 'A';
    char symbol = '%';

    printf("Your grade is %c\n", grade);
    printf("Your Symbol is %c\n", symbol);
    

    char name[]="Brocode";
    char food[] = "Pizza";

    printf("hello, %s \n", name);
    printf("Your favorite food is %s \n", food);
    

    bool isOnline = true; // 1
    bool isPassed = false; // 0

    printf("You are online: %d\n", isOnline);
    printf("You are offline: %d\n", isPassed);

    if (isOnline)
    {
        printf("You are online at 12pm");
    } else{
        printf("You ware sleep");
    }
    


    return 0;
}
```

## Formate specifier
Formate specifier = Special tokens that begin with a % symbol, followed by a character that specifies the data type and optional modifiers (width, precision, flag). They control how data is desplayed or interpreted.

```c
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Formate specifier = Special tokens that begin with a % symbol, followed by a character that specifies the data type and optional modifiers (width, precision, flag). They control how data is desplayed or interpreted.

        int num=1, num1=10, num2=100;

        int num3 = -200;

        printf("%3d\n", num); //  1
        printf("%3d\n", num1);// 10
        printf("%3d\n", num2);//100

        printf("\n\n");

        printf("%04d\n", num); //0001
        printf("%04d\n", num1);//0010
        printf("%04d\n", num2);//0100

        printf("\n\n");

        printf("%+d\n", num); //+1
        printf("%+d\n", num1);//+10
        printf("%+d\n", num2);//+100
        printf("%+d\n", num3);//-200

        printf("\n\n");

        printf("%-d\n", num); //1
        printf("%-d\n", num1);//10
        printf("%-d\n", num2);//100
        printf("%-d\n", num3);//-200



    // %7.2f, In 3.50 -> (3 spaces + 3.50 = 7 characters)
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%7.2f\n", price1); //  19.99 -> (3 spaces + 3.50 = 7 characters)
    printf("%7.2f\n", price2); //   1.50
    printf("%7.2f\n", price3); //-100.00

    printf("%0.2f\n", price1); //  19.99
    printf("%0.2f\n", price2); //   1.50
    printf("%0.2f\n", price3); //-100.00


    return 0;
}

```

## User input
fgets(name, sizeof(name), stdin);
name[strlen(name)-1] = '\0';
getchar();

```c
#include <stdio.h>
#include <string.h>

int main()
{
   int age =0;
   float gpa=0.0f;
   char grade='\0';
   char name[30]="";

   printf("Enter your age:");
   
   scanf("%d", &age);
   printf("Enter your gpa:");
   scanf("%f", &gpa);
   printf("Enter your grade:");
   scanf(" %c", &grade); // Here need space " %c"
   getchar();

   printf("Enter your name:");
//    scanf("%s", &name);
   fgets(name, sizeof(name), stdin);
//    name[strlen(name)-1] = '\0';
    name[strcspn(name, "\n")] = '\0';

   printf("%s\n", name);
   printf("%d\n", age);
   printf("%f\n", gpa);
   printf("%c\n", grade);
    return 0;
}
```

## Math Function

```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int x = 2;
   float x=3.14;


   x = sqrt(x); // 9 -> 3
   x = pow(x, 4); // 2^4 -> 16

   x = round(x); // 3.14 -> 3.000000
   x = ceil(x); // 3.14 -> 4.000000
   x = floor(x); // 3.14 -> 3.000000

   /* Use #include <stdlib.h> */
   int x = -3;
   x = abs(x); // -3 -> 3 but use #include <stdlib.h>

   float x = 45;

   x=log(x); // 3 -> 1.098612
   x = sin(x); // 45 -> 0.850904
   x = cos(x); // 45 -> 0.525322
   x = tan(x); // 45 -> 1.619775

   printf("%f", x); // 45 -> 0.850904

   return 0;
}
```

## IF ELSE STATEMENT

```c
#include <stdio.h>

int main()
{
   int age = 0;

   printf("Enter your age: ");
   scanf("%d", &age);

   if (age >= 65)
   {
      printf("You are a sinior");
   }
   else if (age < 0)
   {
      printf("you haven't been born yet");
   }
   else if (age == 0)
   {
      printf("You age a new born");
   }
   else if (age >= 18)
   {
      printf("You are an adult");
   }
   else
   {
      printf("You are a child");
   }

   return 0;
}
```

Problem 2
```c
#include <stdio.h>
#include <stdbool.h>

int main()
{
   bool isStudent = true;

   if(isStudent){
      printf("You are a Student");
   } else {
      printf("You are not a Student");
   }

   return 0;
}
```

Problem - 3:
```c
#include <stdio.h>
#include <string.h>

int main()
{
   char name[50] = "";

   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strlen(name) - 1] = '\0';

   if (strlen(name) == 0)
   {
      printf("You did not enter your name");
   }
   else
   {
      printf("Hello %s", name);
   }

   return 0;
}
```

## SWITCHES

```c
#include <stdio.h>

int main()
{
   // switch = An alternative to using many if-else statements. ore efficient W/ fixed integer values

   int dayOfWeek = 0;

   printf("Enter a day of the week 1-7: ");
   scanf("%d", &dayOfWeek);
   
   switch (dayOfWeek){
   case 1:
      printf("It is Monday");
      break;
   case 2:
      printf("It is Tuesday");
      break;
   case 3:
      printf("It is Wednessday");
      break;
   case 4:
      printf("It is Thursday");
      break;
   case 5:
      printf("It is Friday");
      break;
   case 6:
      printf("It is Saturday");
      break;
   case 7:
      printf("It is Sunday");
      break;
   default:
   printf("Please Enter number (1 to 7)");
      break;
   }

   return 0;
}
```

```c
#include <stdio.h>

int main()
{
   // switch = An alternative to using many if-else statements. ore efficient W/ fixed integer values

   char dayOfWeek = '\0';

   printf("Enter a day of the week (M, T, W, R, F, S, U): ");
   scanf("%c", &dayOfWeek);
   
   switch (dayOfWeek){
   case 'M':
      printf("It is Monday");
      break;
   case 'T':
      printf("It is Tuesday");
      break;
   case 'W':
      printf("It is Wednessday");
      break;
   case 'R':
      printf("It is Thursday");
      break;
   case 'F':
      printf("It is Friday");
      break;
   case 'S':
      printf("It is Saturday");
      break;
   case 'U':
      printf("It is Sunday");
      break;
   default:
   printf("Please only enter a character (M, T, W, R, F, S, U)");
      break;
   }

   return 0;
}
```

## NESTED IF-ELSE STATEMENTS

```c
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
```

## LOGICAL OPERATORS
// Logical Operators = Used to combine or modify boolean expressions.

   // && = AND
   // || = OR
   // ! = NOT

```c
#include <stdio.h>

int main()
{

   int temp = 1000;

   if (temp >= 30 || temp <= 0)
   {
      printf("The temperature is BAD");
   }
   else
   {
      printf("The temperatue is GOOD");
   }

   return 0;
}
```
```c
#include <stdio.h>
#include <stdbool.h>

int main() {

   bool isSunny = true;

   if(isSunny){
      printf("It is sunney");
   } else {
      printf("It is cloudy");
   }

   return 0;
}
```

## Functions
<h4>function = A reusable section of code that can be invoke "called" Arguments can be sent to a function so tha it can use them.</h4>

```c
#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
   printf("\nHappy birthday to you!\n");
   printf("Happy birthday to you!\n");
   printf("Happy birthday dear %s!\n", name);
   printf("Happy birthday to you!\n");
   printf("You age %d years old!\n", age);
}

int main() {

   char name[50] = "";
   int age = 0;

   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strlen(name)-1] = '\0';

   printf("Enter your age: ");
   scanf("%d", &age);

   happyBirthday(name, age);
   
   return 0;
}
```

## Return
<h4>Return = return a value back to where you call a function</h4>

```c
#include <stdio.h>

double cube(double num){
   return num * num * num;
}

double square(double num){
   return num * num;
}

double main() {

   double x = square(2.4);
   double y = square(3.7);
   double z = square(4.9);
   double P = cube(4.9);

   printf("%.2lf\n", x);
   printf("%.2lf\n", y);
   printf("%.2lf\n", z);
   printf("%.2lf\n", P);

   return 0;
}
```

<h3>Bool</h3>

```c
#include <stdio.h>
#include <stdbool.h>

bool ageChecker(int age){
   if(age >= 18){
      return true;
   } else{
      return false;
   }
}

int main(){
   int age = 21;

   if(ageChecker(age)){
      printf("You may SignUp");
   } else{
      printf("You must be 18+ sign up");
   }

   return 0;
}
```

```c
#include <stdio.h>

int getMax(int x, int y){
   if (x >= y){
      return x;
   } else{
      return y;
   }
   
}
   
int main(){

   int max = getMax(2, 3);
   printf("Max: %d", max);
   
   return 0;
}
```
## Variable scope
<h4>Variable Scope = Refers to where a variable is recogniged and accessable. Variable can shere the same name if they 're in diffent scope {}.</h4>


<h3>1. Local Scope </h3> 

```c
#include <stdio.h>

int add(int a, int b){
   int result = a + b;

   return result;
}

int subtract(int a, int b){
   int result = a - b;

   return result;
}

int main(){

   // int result = add(3, 4);
   int result = subtract(3, 4);

   printf("%d", result);

   return 0;
}
```

<h3>2. Global Scope</h3>

```c
#include <stdio.h>

int result = 0; // Global Scope (hard to debug)

int add(int a, int b){
   int result = a + b;

   return result;
}

int subtract(int a, int b){
   int result = a - b;

   return result;
}

int main(){

   result = add(4, 9);
   result = subtract(9, 2);

   printf("%d", result);

   return 0;
}
```

## Function prototype
<h4>Function prototype = Provide the compiler w/ information about a function's: name, return type, and paramiters before its actual definition.Enables type checking and allows functions to be used before they're defined.
Improves readability, organization, and helps  prevent errors.</h4>

```c
#include <stdio.h>
#include <stdbool.h>

// Function Prototype
void hello(char name[], int age);
bool ageCheck(int age);

int main(){

   hello("Happy", 54);
   if(ageCheck(30)){
      printf("You are old enough to work at the Krusty Krab\n");
   } else{
      printf("You must be 16+ to work at the Krusty Krab\n");
   }

   return 0;
}

void hello(char name[], int age){
   printf("Hello %s\n", name);
   printf("You are %d years old\n", age);
}

bool ageCheck(int age){
   if(age>= 18) return true;  
}
```

## While Loop

<h4>While Loop = Continue some code WHILE the condition remains true Condition must be true for us to enter while loop</h4>

```c
#include <stdio.h>
   
int main(){

   int number = 0;
   
   while(number <= 0){
      printf("Enter a Number greater than 0: ");
      scanf("%d", &number);
   }
   
   return 0;
}
```

## do While Loop
<h4>It is must be run one time.</h4>

```c
#include <stdio.h>
   
int main(){

   int number = 1;
   
   do{
      printf("Enter a Number greater than 0: ");
      scanf("%d", &number);
   } while(number <= 0);
   
   return 0;
}
```

<h3>String</h3>

```c
#include <stdio.h>
#include <string.h>
   
int main(){

   char name[50]="";

   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strlen(name)-1]='\0';
   
   while(strlen(name) == 0){
      printf("Name can't Empty! Please enter your name: ");
      fgets(name, sizeof(name), stdin);
      name[strlen(name)-1]='\0';
   }

   printf("Hello %s", name);
   
   return 0;
}
```

<h3>Boolean</h3>

```c
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
```

## For Loop
<h4>For loop = Repeat code a limited # of times for(Initialization; Condition; Update)</h4>

