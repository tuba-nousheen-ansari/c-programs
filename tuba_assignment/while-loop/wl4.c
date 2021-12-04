//Display Fibonacci Series
#include <stdio.h>
//prototype
void fabo(int, int, int, int);
//main function
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  fabo(t1,t2,nextTerm, n);
return 0;
}
//defination
void fabo(int t1, int t2 , int nextTerm, int n){

  while (nextTerm <= n) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;
  
}

