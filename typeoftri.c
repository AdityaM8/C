#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    int a,b,c;    
printf("enter first side");    
scanf("%d",&a);  
printf("enter second side");    
scanf("%d",&b);    
 printf("enter third side");    
scanf("%d",&c);        
if(a==b && a==c)
{    
printf("it is an equilateral triangle");    
}    
else if((a==b) || (b==c) || (c==a))
{    
printf("it is an isosceles triangle");    
}     
else if(a!=b!=c)
{    
printf("it is a scalene triangle");    
}    
    getch();
    } 
