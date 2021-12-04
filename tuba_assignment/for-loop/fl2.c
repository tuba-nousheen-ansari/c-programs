//Print Multiplication Table Using
#include <stdio.h>
//prototype
void table(int, int);
//main function
int main(){
   int i, num;
     printf("Enter number to print table: ");
     scanf("%d", &num);
     
     table(i, num);
     
   return 0;
}
//defination
void table(int i, int num){

   for(i=1; i<=10; i++){
      printf("%d * %d = %d\n", num, i, (num*i));
   }
  
}
