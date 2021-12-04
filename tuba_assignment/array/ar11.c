//Get the second largest element in an array.
#include<stdio.h>
#include<limits.h>
//prototype
void sec(int, int[]);
//main function
int main()
{
  int n, array[20];
 
  printf("Enter the size: ");
  scanf("%d",&n);
  
  sec(n, array);
 
return 0;
}
//defiantion
void sec(int n,int array[]){

  printf("Enter the elements: ");
  
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
    
  int max = INT_MIN;
  int secondmax = INT_MIN;
    
  for(int i=0; i<n; i++){

    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
}
