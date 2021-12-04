//Print all unique elements in the array.

#include<stdio.h>
int main(){

int arr1[100], n, i, j, k, ctr;

  printf("enter number of elements to be stored in array");
  scanf("%d", &n);
  
  printf("enter %d elements in the array\n");
  
    for(i=0; i<n; i++)
    {
     printf("elements is %d", i);
     scanf("%d",&arr1[i]);
    }
  printf("\n the unique elements found in the array");
  
    for(i=0; i<n; i++)
    {
     ctr=0;
     
      for(j=0, k=n; j<k; j++){
      
      if (i!=j)
      
        if(arr1[i]==arr1[j]){
          ctr++;
        }
      }
    }
   if (ctr==0){
   
   printf("%d",arr1[i]);
   }
   
   printf("\n");
   
   return 0;
}
