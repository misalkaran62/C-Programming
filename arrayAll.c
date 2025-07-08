#include <stdio.h>
void main()
{
   int a[100], n, i, j, sum = 0, min, max, avg = 0, sort, linear, ch, temp;
   printf("Enter a Size of array");
   scanf("%d", &n);
   printf("Enter a Array Element");
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   printf("\n1.Display array \n 2.Minimum Array \n 3. Maximum Array \n 4.Sum Array \n 5.Average Array \n 6.Sort Array \n 7. linear  Search ");
   printf("\nENter Your Choice");
   scanf("%d", &ch);

   switch (ch)
   {
      // Display array
   case 1:
      printf("\n array");
      for (i = 0; i < n; i++)
         printf("\t %d", a[i]);
      break;
      // Minimum in array
   case 2:
      min = a[0];
      for (i = 0; i < n; i++)
      {
         min = (min > a[i]) ? a[i] : min;
      }
      printf("\n minimum no from array=%d", min);
      break;

      //    Maximum in Array

   case 3:
      max = a[0];
      for (i = 0; i < n; i++)
      {
         max = (max < a[i] ? a[i] : max);
      }
      printf("\nMaximum no from array=%d", max);
      break;

      // Sum of Array

   case 4:
      for (i = 0; i < n; i++)
      {
         sum = sum + a[i];
      }
      printf("\nSum of array=%d", sum);
      break;

      // Average of array

   case 5:
      for (i = 0; i < n; i++)
      {
         sum = sum + a[i];
      }
      avg = sum / n;
      printf("\nAverage of Array=%d", avg);
      break;
      // Sort Array

   case 6:
      printf("\n sort array");
      for (i = 0; i < n; i++)
      {
         for (j = 0; j < n - 1 - i; j++)
         {
            if (a[j] > a[j + 1])
            {
               // temp=a[j];
               // a[j]=a[j+1];
               // a[j+1]=temp;
               a[j] = a[j] + a[j + 1];
               a[j + 1] = a[j] - a[j + 1];
               a[j] = a[j] - a[j + 1];
            }
         }
      }
      for (i = 0; i < n; i++)
      {
         printf("\t%d", a[i]);
      }
      break;
   default:
      printf("case is matched");
      break;
   }
   
}