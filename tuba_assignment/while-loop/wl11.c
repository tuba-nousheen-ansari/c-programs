//Number Is Divisible By 11 Using (VEDIC MATH)
#include <stdio.h>
//prototytpe
void divid(int);
//main fucntion
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    divid(num);

 return 0;
}
//defination
void divid(int num){

    if(num % 11 == 0)
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 11");
    }

   
}
