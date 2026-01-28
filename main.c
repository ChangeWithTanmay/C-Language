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