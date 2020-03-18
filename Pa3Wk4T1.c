#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int userNum,sum = 0, count=1;
   printf("Enter your number: ");
   scanf("%d", &userNum);
   while (count<=userNum)
   {
       printf("%d ",count);
       sum += count;
       count++;

   }
   printf("\nSum = %d", sum);
