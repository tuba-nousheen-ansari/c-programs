//Read and print elements of the array. – using recursion
#include<stdio.h>
//prototype
void printarray(int, int, int[]);
//main function
int main()
{
    int n,i;
    int arr[n];
    
       printf("Enter your array size:");
       scanf("%d",&n);
    
       printf("Enter the Array Element:");
        
          for(i=0;i<n;i++){
          
          scanf("%d",arr[i]);
          }
          
       printf("Array Element Are:");
       printarray(n, i, arr);
       
    return 0;
}  
//defination
void printarray(int n, int i, int arr[])
{

    if(i>=n)

    printf("%d ",arr[i]);
    printarray(arr,i+1,n);
}

