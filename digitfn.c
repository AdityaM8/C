#include<stdio.h>
#include<conio.h>
   int isDigit(char a)
{  
  {
    return(a>='0' && a<='9');
  }  
 if(a>='0' && a<='9')
	{
		return(1);
	}
 else
	{ 
		return(0);  
	}
} 
int main()
{
  char b; 
  printf("\n Enter a single value : ");
  scanf("%c",&b); 
  if(isDigit(b))
	{
		printf("\n The value is digit !!");
	}
  return(0);
}
 
