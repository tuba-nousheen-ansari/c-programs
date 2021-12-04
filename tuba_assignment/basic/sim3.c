//Area of Triangle....?
#include<stdio.h> 
//prototype 
void area_triangle(float,float);
//defination
  void area_triangle(float b,float h){     
  float area;  
                
                 area = (b*h) / 2 ;  
      printf("\n Area of Triangle is: %f",area);  
      }  
//main function
  int main()
        {
        float b,h,area;
        printf("enter bridth and height\n");
        scanf("%f%f",&b,&h);
        area_triangle(b,h);
        
      return 0;  }
