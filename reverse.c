#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,s=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
d=n%10;
s=s*10+d;
n=n/10;
}
printf("The reverse is %d",s);
getch();
}
