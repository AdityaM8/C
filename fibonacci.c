#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,n,c,a=0,b=1;
 printf("enter the number of terms:"); 
	scanf("%d",&n);
 for (i=1;i<=n;++i) 
	{
        c=a+b;
        a=b;
        b=c;
		printf("%d",c);
    }
   getch();
}

