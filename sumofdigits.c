#include<stdio.h>
#include<conio.h>
int main()
{
int n,s=0,d,i;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
d=n%10;
s=s+d;
n=n/10;
printf("The sum of digits is%d",s);
}
getch();
}
