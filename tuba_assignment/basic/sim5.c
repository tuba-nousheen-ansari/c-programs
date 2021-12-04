//Simple Interest
#include <stdio.h>
//prototype
int si (float, float, float);
//definition
int si (float p, float t, float r){
int si;
    si = (p*t*r) / 100;
printf("simple interest:%d",si);
}
//main function
int main()
{
    float principle, time, rate;
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);
   si( principle,time,rate);

return 0;}

