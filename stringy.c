#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char x[58]; 
	int c,i;
	printf("enter the string: "); 
	scanf("%s",x);
	while (x[i]!='\0')
	{
		c++;
		i++;
	}
	printf("%s",x); 
	printf("\n size is %d",c); 
	for(i=0;i<c;i++)
	{
		printf("\n %c",x[c-1-i]);
	}
	getch();
}
