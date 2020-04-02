#include <stdio.h>
#include<conio.h>
#include <math.h>
int main() 
{
    double a,b,c,d,rt1,rt2,rp,ip;
    printf("Enter coefficients a,bandc: ");
    scanf("%2f %2f %2f",&a,&b,&c);
    d=b*b-4*a*c;
    // condition for real and different roots
    if (d>0) 
	{
        rt1=(-b+sqrt(d))/(2*a);
        rt2=(-b-sqrt(d))/(2*a);
        printf("rt1=%.21f and rt2=%.21f",rt1,rt2);
    }
    // condition for real and equal roots
    else if (d==0) 
	{
        rt1=rt2=-b/(2*a);
        printf("rt1=rt2=%.21f;",rt1);
    }
    // if roots are not real
    else 
	{
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("rt1=%.2lf+%.2lfi and rt2=%.2f-%.2fi",rp,ip,rp,ip);
    }
    return 0;
} 
