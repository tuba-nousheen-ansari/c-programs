//Find the maximum between two numbers using the switch case.
#include<stdio.h>
//prototype
void maximum(int,int);
//main function
int main(){
    int a,b;
    printf("Enter a two number");
    scanf("%d%d",&a,&b);
    maximum(a,b);
}
//defination
void maximum(int a , int b){
    switch (a<b)
    {
    case 0:
        printf("%d maximum number",a);
    case 1:
        printf("%d maximum number",b);
        break;
    }
}
