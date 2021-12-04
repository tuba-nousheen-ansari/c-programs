//Find Number Is Armstrong Or Not
#include <stdio.h>
//prtotype
void arm(int, int, int, int);
//main function
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    arm(num, originalNum, remainder, result);
   return 0;
}
//defination
void arm(int num, int originalNum, int remainder, int result){
  originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

   
}
