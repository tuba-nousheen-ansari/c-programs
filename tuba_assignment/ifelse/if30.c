//Find all roots of a quadratic equation.
#include <stdio.h>
//prtotype
void pl( int, int, int);
//main function
int main()
{
    int cp,sp,amt; 
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    pl(cp,sp, amt);
    
   return 0;
}
//defination
void pl( int cp, int sp, int amt)
{
  if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }

 }
