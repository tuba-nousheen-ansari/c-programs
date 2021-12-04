//Factorial of a Given Number....?
#include <stdio.h>
//prototype
void facto(int, int, unsigned long long);
//main function
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    facto(n, i, fact);
 return 0;
}
//defination
void facto( int n, int i, unsigned long long fact){

    if (n < 0)
        printf("Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    
}
