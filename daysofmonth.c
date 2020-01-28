#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter any number");
scanf("%d",&a);
	if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12) 
		printf("the month has 31 days");
	else if(a==2) 
		printf("the month has 28 or 29 days");
	else if(a>12) 
		printf("NA");
	else
		 printf("the month has 30 days");
getch();
}
