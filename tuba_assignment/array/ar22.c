//Find the reverse of an array.
#include <stdio.h>    
//prototype
void rev(int[], int);
//main function
    int main()    
    {     
        int arr[] = {1, 2, 3, 4, 5}, length = sizeof(arr)/sizeof(arr[0]) , lenght;    
            
         rev(arr,lenght);
      
        return 0;}   
//defination
void rev(int arr[], int lenght)
{
     printf("Original array: \n");    
        for (int i = 0; i < length; i++) {     
            printf("%d ", arr[i]);     
        }      
            
        printf("\n");    
            
        printf("Array in reverse order: \n");    

        for (int i = length-1; i >= 0; i--) {     
            printf("%d ", arr[i]);     
        }  
}
