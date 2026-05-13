#include <stdio.h>

int main()
{

   int n;

   printf("Enter number of process: ");
   scanf("%d", &n);

   int p[n], BT[n], TAT[n], WT[n];

   // Store Burst Time
   for (int i = 0; i < n; i++)
   {
      p[i] = i;
      printf("P%d BT:", i);
      scanf("%d", &BT[i]);
   }

   // Sorting process and Burst Time
   for (int i = 0; i < n; i++)
   {
      int value = BT[i];
      for (int j = i + 1; j < n; j++)
      {
         if (value > BT[j])
         {
            // BT value swap
            BT[i] = BT[j];
            BT[j] = value;

            // process value swap
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
         }
      }
   }

   // Counting Waiting Time(WT) & Avg.
   WT[0] = 0;
   float avgWT = 0;
   for (int i = 1; i < n; i++)
   {
      WT[i] = WT[i - 1] + BT[i - 1];
      avgWT = avgWT + WT[i];
   }

   // Counting TAT
   float avgTAT = 0;
   for (int i = 0; i < n; i++)
   {
      TAT[i] = WT[i] + BT[i];
      avgTAT = avgTAT + TAT[i];
   }

   // Showing result.
   for (int i = 0; i < n; i++)
   {
      printf("P%d\t %d\t %d\t %d\n", p[i], BT[i], WT[i], TAT[i]);
   }
   printf("Avg. WT=%.2f\n", avgWT / n);
   printf("Avg. TAT=%.2f\n", avgTAT / n);

   return 0;
}