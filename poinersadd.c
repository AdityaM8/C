#include <stdio.h>

int main()
{
    int a, b,s;
    int *ptr1, *ptr2;
    ptr1 = &a; 
    ptr2 = &b; 
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    s= *ptr1 + *ptr2;
    printf("Sum = %d",s);
    return 0;
}
