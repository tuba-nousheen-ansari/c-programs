//Percentage of 5 Subjects.......
#include<stdio.h>
//prototype
void parsentage(int,int,int,int,int);
//defination
void parsentage(int Hindi,int English,int Maths,int science,int soscience)
{
   int total=500,sum=0;
    float parsentage;
    sum=Hindi+English+Maths+science+soscience;
    parsentage=(sum*100)/total;
    printf("Parcentage is: %.2f",parsentage);
   }
   
//main function
   int main()
   {
   int Hindi,English,Maths,science,soscience;
   
    printf("Enter the number of Hindi subject\n");
    scanf("%d",&Hindi);
    printf("Enter the number of English subject\n");
    scanf("%d",&English);
    printf("Enter the number of Maths subject\n");
    scanf("%d",&Maths);
    printf("Enter the number of Science subject\n");
    scanf("%d",&science);
    printf("Enter the number of so-science subject\n");
    scanf("%d",&soscience);
    parsentage(Hindi,English,Maths,science,soscience);
    }
