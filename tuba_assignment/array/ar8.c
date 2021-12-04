//Print all negative elements in an array.
#include<stdio.h>
//prototype
void neg(int,int,int[]);
//main function
int main()
{
 int size, i, a[10];
 
 printf("\n Please Enter the Size of an Array :");
 scanf("%d", &size);
 
 printf("\n Please Enter the Array Elements:");

 neg(size,i,a);

 return 0;
}
//defination
void neg(int size,int i,int a[]){

 for(i = 0; i < size; i++)
 {
      scanf("%d", &a[i]);
 }
 
 printf("\nNegative Numbers in this Array  :  "); 
 for(i = 0; i < size; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%d  ", a[i]);
   }
 }
}
