#include<stdio.h>
#include<conio.h>
int main()
{
int n,f=1,s=0,d,i,t;
printf("Enter the number");
scanf("%d",&n);
t=n;
while(n>0)
{
f=1;
d=n%10;
for(i=1;i<=d;i++)
f=f*i;
s=s+f;
n=n/10;
}
if(s==t)
{
printf("It is a krishnamurthy number");
}
else
{
printf("It is not a krishnamurthy number");
}
getch();
}
