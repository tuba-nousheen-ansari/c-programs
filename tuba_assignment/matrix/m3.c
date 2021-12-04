//Perform scalar matrix multiplication.
#include<stdio.h>
int main(){
 int i, j, rows, columns, multi[10][10], number;
  
 printf("\n Please Enter Number of rows and columns\n");
 scanf("%d %d", &i, &j);
 
 printf("\n Please Enter the Matrix Elements \n");
 for(rows = 0; rows < i; rows++){
 
    for(columns = 0;columns < j;columns++)
    {
      	scanf("%d", &multi[rows][columns]);
    }
  }
   
 printf("\n Please Enter the Multiplication Value  :  ");
 scanf("%d", &number);
 	  
    for(rows = 0; rows < i; rows++){
   		
       for(columns = 0; columns < j; columns++){
       
      	multi[rows][columns] = number * multi[rows][columns];    
   	 	}
  	}
 
 	printf("\n The Result of a Scalar Matrix Multiplication is : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", multi[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}
