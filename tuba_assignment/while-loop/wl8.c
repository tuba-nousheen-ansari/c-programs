//Count Number of Digits of an Integer
#include <stdio.h>
//prototype
void digi(int );
//defination
void digi(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
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
