//Insert An Element Desired or Specific Position In An Array
#include <stdio.h>
 //prototype
void ins(int[],int, int, int, int);
 //main function
int main()
{
   int array[100], position, c, n, value;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
   
   ins(array, position, c, n, value);
   
 return 0;
}
//defination
void ins(int array[],int position,int c,int n,int value){
 
   for (c = 0; c < n; c++)
      scanf("%d", &array [c]);
 
   printf("Enter the location to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array [c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array [c]);
 
  }
