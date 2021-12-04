//GCD of Two Numbers
#include <stdio.h>
//prototype
void gcdnum(int, int, int, int);
//main function
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    gcdnum(n1, n2, i, gcd);
return 0;
}
//defination
void gcdnum(int n1, int n2, int i, int gcd){

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    
}
