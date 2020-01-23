#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    int n;    
printf("enter a number:");    
scanf("%d",&n);     
if(n%2!=0)
{    
printf("Wierd");    
}    
else if(n%2==0 && n>=2 && n<=5)
{    
printf("Not Wierd");    
}     
else if(n%2==0 && 6>=2 && n<=20)
{    
printf("Wierd");    
}     
else if(n%2==0 && n>20)
{    
printf("Not Wierd");    
}     
    getch();
    }
