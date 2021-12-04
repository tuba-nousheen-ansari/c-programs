//Print total number of days in a month using switch case.
#include<stdio.h>
//prototype
void monthcountday(int);
//main function
int main (){
    int month;
    printf("Enter a number of month (1-12)\n");
    scanf("%d",&month);
    monthcountday(month);
}
//defination
void monthcountday(int month){
switch (month){
    case 1:
      (month==1);
      printf("31 Days");
      break;
    case 2:
      (month==2);
      printf("28-29 Days");
      break;
    case 3:
      (month==3);
      printf("31 Days");
    break;
    case 4:
      (month==4);
      printf("30 Days");
      break;
    case 5:
      (month==5);
      printf("31 Days");
      break;
    case 6:
      (month==6);
      printf("30 Days");
      break;
    case 7:
      (month==7);
      printf("31 Days");
      break;
    case 8:
      (month==8);
      printf("30 Days");

      break;
    case 9:
      (month==9);
      printf("31 Days");
      break;
    case 10:
      (month==10);
      printf("30 Days");
      break;
    case 11:
      (month==11);
      printf("31 Days");
      break;
    case 12:
      (month==12);
      printf("30 Days");
      break;
      default:
      printf("you have enter wrong choise");
    }
}
