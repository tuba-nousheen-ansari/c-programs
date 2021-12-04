//check number is pos ,neg or zero

//prototype
void sing(int);

// main function 
#include<stdio.h>
 int main()
{
int n;
 printf("Entre any number:\n");
 scanf("%d",&n);
 sing(n);
return 0;
}

//defination
void sing(int n)
{
    if(n>0)
     printf("Positive");
   else if (n<0)
     printf("Negative");
    else 
     printf("Number is zero\n");
}
