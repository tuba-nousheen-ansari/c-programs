//19Check whether a character is an alphabet or not....
#include <stdio.h>
//prototype
void alp(char c);
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
     alp(c);
}
void alp(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}
