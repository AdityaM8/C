#include <stdio.h>

int main()
{
    int a = 5 ;
    int b = 95;
    int *ptr; 
    int *q;
    
    ptr=&a;
    q=&b;

    printf("a+b= %d",*ptr+*q);
    return 0;
    
}
