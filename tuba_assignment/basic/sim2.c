//Print Ascii Value of the Character.....?
 #include <stdio.h>
//prototype
      void ascii(char);
//defination
      void ascii(char c)
  {
  printf("ASCII value of %c = %d",c,c);
  }
//main function
int main() {  
    
    char c;
    
    printf("Enter a character: \n");
    scanf("%c",&c);  
    ascii(c);
    return 0;
}

