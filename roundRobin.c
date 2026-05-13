#include <stdio.h>

int main()
{
   int n;

   printf("Enter number of process: ");
   scanf("%d", &n);

   int BT[n], TAT[n], WT[n], tempBT[n];

   // Insert Bust time
   for (int i = 0; i < n; i++)
   {
      printf("P%d = ", i);
      scanf("%d", &BT[i]);
      tempBT[i] = BT[i];
   }

   // Enter Quantity of time.
   int qt;
   printf("Enter quantity time:");
   scanf("%d", &qt);

   int done, time = 0;

   while (1)
   {
      for (int i = 0; i < n; i++)
      {
         if (tempBT[i] == 0)
         {
            tempBT[i]=-1;
            done = 1;
         }
         else if(tempBT[i] > 0)
         {
            if (tempBT[i] <= qt)
            {
               time = time + tempBT[i];
               tempBT[i] = 0;
               TAT[i] = time; 
            }
            else
            {
               tempBT[i] = tempBT[i] - qt;
               time = time + qt;
            }
            printf("p%d ->", i);
            done = 0;
         }
      }

      if(done){
         break;
      }
   }

   // Counting Waiting Time, Avg count
   float avgWT=0, avgTAT=0;

   for(int i=0; i<n; i++){
      WT[i]=TAT[i]-BT[i];
      avgWT=avgWT+WT[i];
      avgTAT=avgTAT+TAT[i];
   }

   // Output format
   printf("\n");
   printf("Process\tBT\tTAT\tWT\n");
   printf("-------+------+------+-----------------------\n");
   for (int i = 0; i < n; i++)
   {
      printf("P%d \t %d\t %d\t %d\n", i, BT[i], TAT[i], WT[i]);
   }

   printf("\nAvg TAT = %.2f\nAvg WT = %.2f", avgTAT/n, avgWT/5);
   
   return 0;
}