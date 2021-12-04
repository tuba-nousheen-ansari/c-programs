// Finds the volume of a cylinder
#include<stdio.h>                                                             
//prototype
 void vol(int, int, float, float);
//main function                                                                          
int main()                                                                     
{                                                                               
    int radius, height;                                                         
    float volume=0, pi=3.14;                                                    
    printf("\nFinds volume of a cylinder\n-------------------");                
    printf("\nEnter radius: ");                                                 
    scanf("%d", &radius);                                                       
                                                                                
    printf("\nEnter height: ");                                                 
    scanf("%d", &height);                                                       
        
    vol(radius,height,volume,pi);    
                                                                                
return 0;}
//defination
void vol(int radius,int height, float volume, float pi){
    volume = pi*(radius*radius*height);                                         
                                                                                
    printf("Volume of a cylinder is: %.2f", volume);                            
  
}
