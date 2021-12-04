//17Find whether a number is even or odd.....
#include<stdio.h>
//prototype
void EO(int);
//main function
int main(){
int a;
	printf("Enter a no.");
	scanf("%d",&a);
	EO(a);
}
//Definition....
void EO(int a){
  if (a%2==0)
     printf ("%d Number is even\n",a);
  else
     printf("%d Number is Odd\n",a);
}
