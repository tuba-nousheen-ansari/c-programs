//Find Number Is Armstrong Or Not
#include <stdio.h>
//prtotype
void arm(int, int, int, int);
//main function
int main() {
    int num, originalnum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    arm(num, originalnum, remainder, result);
   return 0;
}
//defination
void arm(int num, int originalnum, int remainder, int result){
  originalnum = num;

    while (originalnum != 0) {
 
        remainder = originalnum % 10;
        
       result += remainder * remainder * remainder;
        
       originalnsum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

   
}
