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