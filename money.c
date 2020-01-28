#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter any number");
scanf("%d",&a);
printf("enter the note you want to count ( Rs 10 , 20 , 50 , 100 , 200 , 500): " );
scanf("%d",&b);
switch(b)
{
case 10: printf("%d",(a/10));break;
case 20: printf("%d",(a/20));break;
case 50: printf("%d",(a/50));break;
case 100: printf("%d",(a/100));break;
case 200: printf("%d",(a/200));break;
case 500: printf("%d",(a/500));break;
default:printf("NA");
}
getch();
}
