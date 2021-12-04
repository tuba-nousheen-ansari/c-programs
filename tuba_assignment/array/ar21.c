//Merge two arrays to the third array
#include<stdio.h>
void two(int, int, int, int, int, int[], int[], int[]);
//main function
int main()
{
 	int n1, n2, n3, i, j, a[n1], b[n2], c[n3];
 	
 	printf("\n Enter the number of elements for  First Array  :  ");
 	scanf("%d", &n1); 
    
        two(n1, n2, n3, i, j, a, b, c);
 
  	return 0;
}
//defination
void two(int n1,int n2,int n3,int i,int j,int a[n1],int b[n2],int c[n3]){
	
	printf("\nEnter the elements for First Array :  ");
 	
 	for(i = 0; i < n1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\n Enter the number of elements for  Second Array  :  ");
 	scanf("%d", &n2); 
  
 	printf("\nEnter the elements for Second Array  :  ");
 	for(i = 0; i < n2; i++)
  	{
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;   
      
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
}



