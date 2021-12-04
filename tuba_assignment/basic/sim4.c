/* Write person’s name in abbreviated form */
#include <stdio.h>
//prototype
void abbreviated (char fname[20], char mname[20], char lname[20]);
//defination
void abbreviated (char fname[20], char mname[20], char lname[20])
{ 
      printf("Abbreviated name: ");
      printf("%c. %c. %s\n", fname[0], mname[0], lname);

}
//function
int main()

{
    char fname[20], mname[20], lname[20];
    
      printf("Enter full name (first middle last): ");
      scanf("%s %s %s", fname, mname, lname);
      abbreviated (fname, mname, lname);
}
