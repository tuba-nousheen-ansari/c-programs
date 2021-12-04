//Find A Grade Of Given Marks or (Find a Grade of Given Marks Using Switch Case)
#include<stdio.h>
//prototype
void grade(int);
//main function
int main(){
    int n;
    printf("Enter a number by given grade\n");
    scanf("%d",&n);
    grade(n);
}
//defination
void grade(int n){
    switch (n/10)
    {
    case 10:
    case 9:
    printf("Grade A");
    break;
    case 8:
    printf("Grade B");
    break;
    case 7:
    printf("Grade C");
    break;
    case 6:
    printf("Grade D");
    break;
    case 5:
    printf("Grade E");
    break;
    default:
    printf("RESULT :Fail");
        break;
    }
}
