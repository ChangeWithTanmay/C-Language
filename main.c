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

