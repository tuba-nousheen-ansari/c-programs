//Right rotate an array.
#include<stdio.h>
//prototype
void right(int, int[], int, int, int, int);
//main function
int main(){
  
     int lenght, arr[lenght], i, n, j, temp;
    
     printf("enter the lenght of the array");
     scanf("%d",&lenght);
     
     right(lenght, arr, i, n, j, temp);
     
  return 0;
}
//defination
void right(int lenght,int arr[],int i,int n,int j,int temp){
    
     printf("enter the array elements");
     
       for(i=0; i<lenght; i++)
       scanf("%d",&arr[i]);
     
       printf("enter the index of rotation");
       scanf("%d",&n);
     
       printf("original array: \n");
     
       for(i=0; i<lenght; i++){
       printf("%d",arr[i]);
       }
     
       for(i=0; i<n; i++){
          temp=arr[lenght-1];
             
          for(j=lenght; j>0; j--){
             arr[j] = arr[j-1];
             }
           arr[j]= temp;
             }
       printf("\n");
       
       printf("array after rotation is: \n");
       
       for(i=0; i<n; i++){
       
       printf("%d",arr[i]);
       }
       
  
}
