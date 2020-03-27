#include<stdio.h>
#include<conio.h>

void printstars(int,char);
int main()
{
  printstars(10,'#');
  printf("\n !!AMDZS!!");
  printstars(20,'@');
  return(0);
}
void printstars(int num,char toprint)
{
	int i;
	printf("\n");
	for(i=1;i<=num;i++)
	printf("%c", toprint);
}

