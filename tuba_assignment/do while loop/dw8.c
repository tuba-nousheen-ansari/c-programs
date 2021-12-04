//Count Number of Digits of an Integer
#include <stdio.h>
//prototype
void digit(long long, int);
//main function
int main() {
  long long n;
  int count = 0;
  printf("Enter number: ");
  scanf("%lld", &n);
  digit(n, count);
}
//defination
void digit(long long n, int count){
 
     do {
          n /= 10;
           ++count;
        } while (n != 0);

     printf("Number of digits: %d", count);
}
