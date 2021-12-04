//calculator
#include<stdio.h>
void calculator(double,double,char );
//main function
int main (){
    char op;
    double first , second;
    printf("Enter a operator (+,-,*,/)\n");
    scanf("%c",&op);
    printf("Enter two operand\n");
    scanf("%lf%lf",&first,&second);
    calculator(first,second, op);
}
//defination
void calculator(double first,double second,char op){
    switch (op)
    {
    case '+':
    printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
    printf("invalid operator");
        break;
    //}
}
}
