#include <stdio.h>
#define MAX_SIZE 20
int main()
{
    int arr[MAX_SIZE];
    int n,i;
    int * ptr = arr; 
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter element:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;
    printf("Array elements: ");
    for (i=0; i<n; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}
