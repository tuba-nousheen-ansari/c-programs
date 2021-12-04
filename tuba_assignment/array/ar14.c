//Copy all elements from an array to another array.
#include <stdio.h>    
//protottype
void copying(int[],int, int[]);    
//main function
int main(){
         
      int arr1[] = {1, 2, 3, 4, 5};    
      int length = sizeof(arr1)/sizeof(arr1[0]);    
      int arr2[length]; 
      
      copying(arr1, lenght, arr2);
     
        return 0; 
  }
//defination
void copying( int arr1[], int length, int arr2){
       
        for (int i = 0; i < length; i++) {     
            arr2[i] = arr1[i];     
        }      
        
        printf("Elements of original array: \n");    
        for (int i = 0; i < length; i++) {     
            printf("%d ", arr1[i]);    
        }    
            
        printf("\n"); 
          
        printf("Elements of new array: \n");    
        for (int i = 0; i < length; i++) {     
            printf("%d ", arr2[i]);    
        } 
}
