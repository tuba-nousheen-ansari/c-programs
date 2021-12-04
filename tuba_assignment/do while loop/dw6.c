//Reverse a Number
#include <stdio.h>
//prototype
void reverse(int, int, int);
//main function
int main() {
    int n, rev = 0, remainder;
    printf("Enter number: \n");
    scanf("%d", &n);
    reverse(n, rev, remainder);
   return 0;
}
//defination
void reverse(int n, int rev , int remainder){
  
  do{      remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }  while (n != 0);
    printf("Reversed number = %d", rev);
}

