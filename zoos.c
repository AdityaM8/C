#include <stdio.h>
#include <string.h>
int main()
{
  char a[20];
  int x,y,i,l,c=0;
 
    scanf("%s",&a);
 
  l=strlen(a);
  
  for(i=0;i<l;i++)
  {
      if(a[i]=='z')
      {
          c++;
      }
  }
  x=c*2;
  y=l-c;
  if(x==y)
  {
      printf("Yes");
  }
  else
  {
      printf("No");
  }
 
   return 0;
}
