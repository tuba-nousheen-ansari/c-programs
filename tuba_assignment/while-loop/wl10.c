//Print A Calendar Taking Input From User Using Loop
#include <stdio.h>
//prototype
void calender(int, int, int, int, int, int, int);
//main function
int main() {
int a, b, c, weekday, i, day, month;
printf("Number of days in the month: ");
scanf("%d", &a);

calender(a, b, c, weekday, i, day, month);
}
//defination
void calender(int a,int b,int c,int weekday,int i,int day,int month){
while(1){

if((a <= 31) && (a >= 28)){
    break;
} else { 
    printf("invalid data try again :");
    scanf("%d", &a);

}
}
 printf("the starting day:");
scanf("%d", &b);
 printf("\nMo  Tu  We  Th  Fr  Sa  Su\n");
}
