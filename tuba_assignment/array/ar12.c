//Count the total number of even and odd elements in an array.
#include<stdio.h>
//prototype
void eo(int[], int, int, int, int);
//main function
int main()
{

    int arr[100], size, oddcount = 0, evencount = 0, i;

    printf("Enter array size\n");
    scanf("%d",&size);

    eo(arr, size, oddcount, evencount, i);

 return 0;
}
//defination
void eo(int arr[], int size, int oddcount, int evencount, int i){
   
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
  for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1)
            oddcount++;
        else
            evencount++;
    }

    printf("Odd number count = %d\nEven number count = %d\n",oddcount,evencount);

   
}
