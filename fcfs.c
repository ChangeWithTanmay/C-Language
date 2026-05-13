#include <stdio.h>

int main(){
   int n;
   printf("Enter Numer of process:");
   scanf("%d", &n);

   int  BT[n], TAT[n], WT[n];

   // I neet a loop where, I am add any process BT value.
   for(int i=0; i<n; i++){
      
      printf("process %d BT:", i);
      scanf("%d", &BT[i]);
   }


   // calcutation for WT
   WT[0]=0;
   float avgWT=0, avgTAT=0;

   for(int i=1; i<n; i++){
      WT[i] = WT[i-1] + BT[i-1];
      avgWT=avgWT+WT[i];
   }

   // calculate for TAT
   for(int i=0; i<n; i++){
      TAT[i]=BT[i]+WT[i];
      avgTAT=avgTAT+TAT[i];
   }
   


   // print all value.
   // Table formate
   printf("\n\n");
   printf("Process\tBT\tWT\tTAT\n");
   printf("-------+------+------+-----------------------");
   for(int i=0; i<n; i++){
      printf("\np%d\t%d\t%d\t%d", i, BT[i], WT[i], TAT[i]);
   }

   printf("\nAvg. WT: %.2f, Avg. TAT: %.2f", avgWT/n, avgTAT/n);

   return 0;
}