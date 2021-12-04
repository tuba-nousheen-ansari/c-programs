//Sort A Float Array In Ascending 
#include <stdio.h>
#define MAX_SIZE 100  
//prototype
void ascen(int, int, int);
//main function
int main()
{
    
    printf("Enter size of array: ");
    scanf("%d", &size);

  
    printf("Enter elements in array: ");
    
    ascen(arr[MAX_SIZE],size,i,j,temp);
    
  return 0;
}
//defination
void ascen(int arr[MAX_SIZE], int size, int i,int j,int temp){
 
  for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
       for(j=i+1; j<size; j++)
        {
          if(arr[i] > arr[j])
            {
                temp   = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    
}
