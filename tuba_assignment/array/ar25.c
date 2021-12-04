//Sort array elements in ascending or descending order.
#include<stdio.h>
//prototype
void order(int, int, int, int[], int, int, int, int);
//main function
int main(){
    int i,j,n,a[100],temp,p,q,temp1;
    printf("Enter the size of array : \n") ;
    scanf("%d",&n);
 
    order(i,j,n,a,temp,p,q,temp1);
   
 return 0;}
//defination
void order(int i,int j,int n,int a[],int temp,int p,int q,int temp1){
   
   printf("Enter the elements : \n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) { 
        
        if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
}
}
    
