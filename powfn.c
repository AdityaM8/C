#include<stdio.h> 
#include<conio.h>
#include<math.h>
int main() 
{ 
	int x,n,y; 
	printf("Enter x and n:");
    scanf("%d %d",&x,&n);
	y=(int)(pow(x,n)); 
	printf("%d",y); 
	return 0; 
} 

