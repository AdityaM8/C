#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
printf("enter any number");
scanf("%d",&a);
printf("enter any number");
scanf("%d",&b);
printf("enter any number");
scanf("%d",&c);
a>b && a>c?printf("the largest is %d",a):printf("a is not largest");
b>a && b>c?printf("\n the largest is %d",b):printf("\n b is not largest");
c>a && c>b?printf("\n the largest is %d",c):printf("\n c is not largest");
getch();
}
