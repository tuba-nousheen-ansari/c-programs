//Count Number of Digits of an Integer
#include <stdio.h>
//prototype
void digi(int );
//defination
void digi(long long n)
{
    int count = 0;
   
      do {
        n = n / 10;
        ++count;
        } 
    while (n != 0);
    return count;
}
//main function
int main(void)
{
    long long n = 345289467;
    printf("Number of digits : %d", digi(n));
    
    digi(count);
    return 0;
}
