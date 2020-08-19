#include <stdio.h>

int main()
{
    int a = 5 ; // int value storage location 
    float b = 20.5 ;
    int *ptr; 
    float *q;
    
    ptr=&a;
    q=&b;
    printf("\n Size of int pointer is %d",ptr);
    printf("\n Size of float pointer is %d",q);
    ptr=ptr+1; // pointer arithmetic 
    q=q+1; // pointer arithmetic 
    printf("\n Size of int pointer is %d",ptr);
    printf("\n Size of float pointer is %d",q);
    
    
    return 0;
}
