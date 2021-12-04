//C program to convert temperature from degree celsius to fahrenheit
#include<stdio.h>
//prototype
 void temprature(float,float);
//defination
void temprature(float celsius, float fahrenheit)
{

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%f Celsius = %f Fahrenheit", celsius, fahrenheit);
}
//main function
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    temprature(celsius, fahrenheit);
  
}
