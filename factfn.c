#include<stdio.h> 
#include<conio.h>
#include<math.h>
int fact(int);
void main()
{
 int n,fac;
 
  	printf("Enter a number");
  	scanf("%d",&n);
  	fac=fact(n);
    printf("Factorial num(%d)=%d\n",n,fac);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
