//Count the total number of duplicate elements in an array
#include <stdio.h>
//prototype
void dupli(int[], int, int, int, int);
//main function 
int main()
{
	int arr[10], i, j, size, count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &size);
	
	printf("\n Please Enter %d elements of an Array  :  ", size);
	
	dupli(arr, i, j, size, count);
	
	return 0;
}
//defination
void dupli(int arr[],int i,int j,int size,int count ){
 
 for (i = 0; i < size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", count);
	     
 	
}
