//Check whether an alphabet is a vowel or consonant using a switch case.
#include<stdio.h>
void vowel(char);
int main(){
    char choice;
    
    printf("Enter a character \n");
    scanf("%c",&choice);
    vowel(choice);
}
void vowel(char choice){
    //char choice;
    char a,e,i,o,u,A,E,I,O,U;
    switch (choice)
    {
    case 'A':
        printf("%c is a vowel",A);
        break;
    case 'E':
        printf("%c is a vowel",E);
        break;
    case 'I':
        printf("%c is a vowel",I);
        break;
    case 'O':
        printf("%c is a vowel",O);
        break;
    case 'U':
        printf("%c is a vowel",U);
        break;
    case 'a':
        printf("%c is a vowel",a);
        break;
    case 'e':
        printf("%c is a vowel",e);
        break;
    case 'i':
        printf("%c is a vowel",i);
        break;
    case 'o':
        printf("%c is a vowel",o);
        break;
    case 'u':
        printf("%c is a vowel",u);
        break;
    default:
        printf("It is consonant");
        break;
    }
}
