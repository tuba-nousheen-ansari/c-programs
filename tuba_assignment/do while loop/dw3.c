//Calculate Sum of Natural Numbers
#include <stdio.h>
//prototype
void natural(int, int, int);
//main function
int main() {

    int n, i, sum = 0;

    natural(n, i, sum);
 return 0;
}
//defination
void natural(int n, int i, int sum ){
  do {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
}

