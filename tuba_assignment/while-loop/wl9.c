//Find A Generic Root Of Number
#include<stdio.h>  
//prototype
void gr(int, int, int, int);
//mian function
int main()  
{  
    int num, temp, rem, sum = 0;  
   
    printf("Enter a number\n");  
    scanf("%d", &num);  
    temp = num;  
    gr(num, temp, rem, sum);
 return 0;  
}
//defination
void gr(int num, int temp, int rem, int sum){

  while(temp > 0)  
    {  
        rem  = temp % 10;  
        sum  = sum + rem;  
        temp = temp / 10;  
  
        if(temp == 0)  
        {  
            if(sum > 9)  
            {  
                temp = sum;  
                sum  = 0;  
            }  
        }  
    }  
  
    printf("Generic Root of %d is %d\n", num, sum);  
}
