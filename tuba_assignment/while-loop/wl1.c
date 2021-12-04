//Reverse A given Number
#include <stdio.h>
//prototype
void reverse(int, int, int);
//main function
int main() {
    int n, rev = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n, rev, remainder);
   return 0;
}
//defination
void reverse(int n, int rev,  int remainder){
 while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
}
