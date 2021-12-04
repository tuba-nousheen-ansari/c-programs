//Print day of week name using switch case.
#include<stdio.h>
//prottype
void week(int);
//main function
int main(){
    int n;
    printf("Enter the number of day 1-7\n");
    scanf("%d",&n);
    week(n);
    return 0;
}
//defination
void week(int n){
    switch (n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid choice please enter a number on limit if 1 to 7");
        break;
    }
}
