#include<stdio.h>
#include<string.h>
int string_length(char*);
void reverse(char*);
main() 
{
   char string[20];
   printf("Enter a string : \n");
   gets(string);
   reverse(string);
   printf("Reverse :\"%s\n",string);
   return 0;
}
void reverse(char *string) 
{
   int l,c;
   char *start,*stop,temp;
   l=string_length(string);
   start=string;
   stop=string;
   for (c=0;c<(l-1);c++)
      stop++;
   for (c=0;c<l/2;c++) 
   {        
      temp=*stop;
      *stop=*start;
      *start=temp;
      start++;
      stop--;
   }
}
int string_length(char *p)
{
   int c=0;
   while(*(p+c)!='\0')
      c++;
   return c;
}
