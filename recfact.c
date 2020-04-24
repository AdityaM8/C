#include<stdio.h>
#include<conio.h>
 int fact(int x);
int main() 
{
    int x;
    printf("Enter a no.");
    scanf("%d",&x);
    printf("Factorial of %d = %ld", x, fact(x));
    return 0;
}
 int fact(int x) 
 {
    if (x>=1)
    {
        return x*fact(x-1);
	}
    else
    {
        return 1;
	}
}
