//Count the total number of negative elements in an array.
#include <stdio.h>
//prototype
void negele(int[], int, int, int);
//main function
int main()
{
    int arr[100]; 
    int i, num, count=0;

    printf("Enter size of the array : ");
    scanf("%d", &num);
    
    negele(arr,i,num,count);

 return 0;
}
//defination
void negele( int arr[], int i,int num,int count){

    printf("Enter elements in array : ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

 
    for(i=0; i<num; i++)
    {
        if(arr[i]<0)
        {
            count++; 
        }
    }
    printf("\nTotal number of negative elements = %d", count);

}
