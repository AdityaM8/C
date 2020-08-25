#include <stdio.h>
int main()
{
    int n = 10;
    int * ptr;
    ptr = &n;
    printf("Address of num = %d\n", &n);
    printf("Value of num = %d\n", n);
    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    return 0;
}
