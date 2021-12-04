//LCM OF ANY NANUMBER
#include<stdio.h>
//prototype
void lcm(int,int);
//defination
void lcm(int a,int b){
int max;
max=(a<b)?a:b;
while(1){
if (max%a==0&&max%b==0){
printf("the lcm of %d and %dis %d",a,b,max);
break;
}
++max;
}
}
//main function
 int main(){
 int a,b;
 printf("entre two number:\n");
 scanf("%d%d",&a,&b);
 lcm(a,b);
 }
