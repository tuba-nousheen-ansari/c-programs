//Check Whether a Number is A Palindrome or Not
#include <stdio.h>
//prototype
void palindrome(int, int, int, int);
//main function
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter number: \n");
    scanf("%d", &n);
    original = n;
 
    palindrome(n, reversed, remainder, original);
 return 0;
}
//defination
void palindrome(int n, int reversed , int remainder, int original){
    do {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }  while (n != 0);

 if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

   
}
