//Gross Salary of an Employee
#include<stdio.h>
//prototype
void grosss(int);
//Defination
void grosss(int basic)
{
   float gross,da, ta;
   da = 0.1 * basic;
   ta = 0.12 * basic;
   gross = basic + da + ta;
   printf("Your Gross Salary is : %f",gross);
}
//main function
int main()
{
int basic;
   float gross,da, ta;
   printf("\n Enter Basic Salary : ");
   scanf("%d", &basic);
   grosss(basic);
return 0;}
