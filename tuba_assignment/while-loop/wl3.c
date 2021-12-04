//Calculate Sum of Natural Numbers
#include <stdio.h>
//prototype
void nat(int, int, int);
//main function
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    nat(n, i, sum);
    return 0;
}
//defination
void nat( int n, int i,int sum){
    i = 1;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
}
