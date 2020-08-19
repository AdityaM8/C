#include <stdio.h>

int main()
{
    int a = 5 ; // int value storage location 
    double b = 20.5 ;
    int *ptr; 
    double *q;
    
    ptr=&a;
    q=&b;
    printf("\n Size of int pointer is %d",ptr);
    printf("\n Size of double pointer is %d",q);
    ptr=ptr+1; // pointer arithmetic 
    q=q+1; // pointer arithmetic 
    printf("\n Size of int pointer is %d",ptr);
    printf("\n Size of double pointer is %d",q);
    
    
    return 0;
}
