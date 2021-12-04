//Put even and odd elements of an array in two separate arrays.
 #include <stdio.h>
 //prototype
void eo(int[],int[],int[],int,int,int,int);
//mian function
int main(){
    int arr[10], aro[10], are[10];
    int i, j = 0, k = 0, n;

      printf("Enter the size of array ");
      scanf("%d", &n);
      
      eo(arr,aro,are,i,j,k,n);
  
 return 0;  }
 //defination
 void eo(int arr[10],int aro[10],int are[10], int i,int j,int k ,int n){
 
     printf("Enter the elements of the array ");

        for (i = 0; i < n; i++){

            scanf("%d", &arr[i]);
           fflush(stdin);
 }

       for (i = 0; i < n; i++)  {
            if (arr[i] % 2 == 0)

            {
                are[j] = arr[i];
                j++;
            }
            else
            {
                aro[k] = arr[i];
                k++;
            }
        }
    printf("The elements of aro are ");
      for (i = 0; i < k; i++){
         printf("%dn\n", aro[i]);
       }
    printf("The elements of aros are ");
      for (i = 0; i < j; i++)

        {
            printf("%dn\nss", are[i]);
        }
 }
