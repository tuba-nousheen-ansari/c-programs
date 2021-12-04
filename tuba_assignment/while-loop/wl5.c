//Find LCM of two Numbers
#include <stdio.h>
//prototype
void lcm(int, int, int);
//main function
int main() {
    int n1, n2, max;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    lcm(n1, n2, max);
return 0;
}
//defination
void lcm(int n1, int n2, int max){
  max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
  }
