//Multiply two matrices
#include<stdio.h>
int main(){
  int m, n, p, q, c, d, k, sum=0;
  int first[10][10], second[10][10], multiply[10][10];
  
  printf("enter number of columns and rows in first matrix");
  scanf("%d%d",&m,&n);
  
  printf("Enter number of element in first matrix");
  
  for(c=0; c<m; c++){
  
     for(d=0; d<n; d++)
     scanf("%d",&first[c][d]);
     }
     
   printf("enter number of columns and rows in second matrix");
   scanf("%d%d",&p,&q);
   
   if(n != p)
     printf("multiplication is not possible");
     
   else{
     printf("enter the elements of second matrix");
     
     for(c=0; c,p; c++){
        for(d=0; d<q; d++)
         scanf("%d",&second[c][d]);
        } 
     for(c=0; c<m; c++){
        for(d=0; d<q; d++){
           for(k=0; k<p; k++){
           sum=sum+first[c][k]*second[k][d];
           }
      multiply[c][d]=sum;
      sum=0;
        }
     }
     
   printf("multiply of the matrices");
   
     for(c=0; c<m; c++){
        for(d=0; d<q; d++)
        
        printf("%d",multiply[c][d]);
        
     printf("\n");
     }

   }
     
return 0;
}
