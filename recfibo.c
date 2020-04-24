#include<stdio.h>
#include<conio.h> 
int Fibo(int);
int main()
{
   int x, c=0, i;
   scanf("%d",&x);
   printf("Fibonacci series\n");
   for (i=1;i<=x;i++)
   {
      printf("%d\n",Fibo(c));
      c++; 
   }
   return 0;
}
int Fibo(int x)
{
   if (x==0)
   {
      return 0;
	}
   else if (x==1)
	{
      return 1;
	}
   else
	{
      return (Fibo(x-1)+Fibo(x-2));
	}
} 
