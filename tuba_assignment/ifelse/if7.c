//Find whether a number is even or odd.....
#include<stdio.h>
void EO(int);
//Run...
int main(){
int a;
	printf("Enter a no.");
	scanf("%d",&a);
	EO(a);
}
//Definition....
void EO(int a){
  if (a%2==0)
     printf ("%d is even \n",a);
  else
     printf("%d is odd  2\n",a);
}
