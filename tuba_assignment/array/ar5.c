//Check String Is Palindrome Or Not Using For Loop
#include <stdio.h>
#include <string.h>
//prototype
void palin(char[], int, int, int);
//main function
int main()
{
  	char str[100];
  	int i, len, flag;
  	flag = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	palin(str,i,len,flag);
  	
 	return 0;
}
//defination
void palin(char str[], int i,int len,int flag){
 	
  	len = strlen(str);
  	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;	
		} 
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
	
  
}
