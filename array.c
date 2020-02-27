#include <stdio.h>
#define MAX 5

void main()
{
 int a[MAX], b[MAX];
 int i,j;
 for(i=0,j=MAX-1;i<MAX;i++,j--)
 {
 	printf("\n Enter a number:");
 	scanf("%d", &a[i]);
 	b[j]=a[i];
 }
 printf("\n Elements in array a:");
 for(i=0;i<MAX;i++)
 {
 	printf("\t%d",a[i]);
 }
 printf("\n Elements in array b:");
 for(i=0;i<MAX;i++)
 {
 	printf("\t%d",b[i]);
 }
}

