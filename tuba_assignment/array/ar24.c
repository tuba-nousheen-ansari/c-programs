//Search an element in an array.
#include<stdio.h>
//prototype
void search(int[], int, int, int, int);
//main function
int main()
{
   int a[100], n, element, i, pos=0;


   printf("Enter array size : ");
   scanf("%d", &n);
   
   search(a,n,element,i,pos);

   return 0;
}
//defination
void search(int a[],int n,int element,int i,int pos){

   printf("Enter array elements: ");
   for(i=0; i<n; i++)scanf("%d", &a[i]);

   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position s", element, i+1);
  
     }  

     else
       printf("%d not found.", element);
     }
 
}
