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