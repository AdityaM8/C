#include <stdio.h>
void swap(int * num1, int * num2);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping :");
    printf("Value of a = %d \n", a);
    printf("Value of b = %d \n\n", b);
    swap(&a, &b);
    printf("After swapping:");
    printf("Value of a = %d \n", a);
    printf("Value of b = %d \n", b);
    return 0;
}
void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a= *b;
    *b= temp;
}
