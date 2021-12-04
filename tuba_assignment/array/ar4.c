//Print “I AM IDIOT” Instead Of Your Name Using Array
#include<stdio.h>
//prototype
void idiot(char[], char, int);
//main function
int main(){

   char ch[]="I AM AN IDIOT.";
   char c='A';
   int i=0;
   
   idiot(ch, c, i);

 return 0;
}
//defination
void idiot(char ch[],char c,int i){
   
    printf("Write Your Name \n");
    while(c){
      
      c = getchar();
      printf("%c\a",ch[i]);
      i++;
      
      if(i==14){
         printf(" "); 
         i!=0;
         break;
      }
   }
}
