//area of circle
#include<stdio.h>
//prototype
	void circle(float);
//defination
	void circle(float c)
      {
	float area, circumference, radius;
	
	 area =3.14*c*c;
	
	 printf("area of circle is %f:",area);
	
      } 
//main function
int main ()
{
	float c;
	
	 
      printf("enter any number:\n");
      scanf("%f",&c);
      circle(c);
	    return 0;
}
