//22Check whether a character is an uppercase or lowercase alphabet.....
#include <stdio.h>
//prototype
void ul(char );
//Run...
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
     ul(c);
}
//Defination
void ul(char c){
    if(c >= 'a' && c <= 'z')
      printf("%c is in lower case.",c);
    else //(c >= 'A' && c <= 'Z');
      printf("%c is in upper case.",c);
}
