//Delete Element From Array At Desired Or Specific Position
#include <stdio.h>
//prototype
void del(int[],int,int,int);
//main function
int main()
{
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   
   del(array,position, c, n);
   
return 0;
}
//defination
void del( int array[],int position,int c,int n){

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Delete not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   
}
