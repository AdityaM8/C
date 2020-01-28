#include<stdio.h>
#include<conio.h>
void main()
{
	int cp,sp,profit,loss;
printf("enter the values of cost price and then selling price");
scanf("%d%d",&cp,&sp);
	if(cp>sp)
{ loss=cp-sp;
  	printf("LOSS = %d",loss);
}
	else if(cp==sp) 
		printf("no profit");
	else
{
profit=sp-cp;
printf("PROFIT = %d",profit);
}
getch();
}
