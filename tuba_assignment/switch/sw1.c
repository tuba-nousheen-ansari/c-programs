//Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
//prototype
void tf(float,float);
//main function
int main(){
 float celsius, fahrenheit;
  tf(fahrenheit,celsius);
 }
 //defination
 void tf(float celsius, float fahrenheit){
 int choice;
	printf("Enter 1 for celsius to fahrenheit And 2 for fahrenheit to celsius \n");
	scanf("%d",&choice);
 switch(choice){
 case 1:
 	printf("Enter the value of celcious\n");
 	scanf("%f",&celsius);
 	fahrenheit = (celsius * 9 / 5) + 32;
    	printf("%.2f temperature in Celsiuss = %.2f Fahrenheit", celsius, fahrenheit);
    break;
 case 2 :
 	printf("Enter the value of ferahight\n");
 	scanf("%f",&fahrenheit);
 	celsius = (fahrenheit * 9 / 5) - 32;
  	printf("%.2f temperature in Celsiuss = %.2f Fahrenheit", celsius, fahrenheit);
 	}
 }
