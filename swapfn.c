#include<stdio.h> 
#include<conio.h>
#include<math.h>
void swap(int *,int *);
int main()
{
    int x,y;
    printf("Enter 1st no");
    scanf("%d",&x);
    printf("Enter 2nd no");
    scanf("%d",&y);	
    printf("Before swap: x=%d, y=%d",x,y);
    swap(&x,&y);
    printf("\nAfter swap: x=%d, y=%d",x,y);
    return 0;
}
