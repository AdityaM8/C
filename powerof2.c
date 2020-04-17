#include<stdio.h> 
#include<conio.h>
#include<math.h>
int main()
{
    int n,x,y;     
    printf("Enter a no: ");
    scanf("%d",&n);   
    x=n;
    y=0;
    while(x!=1)
    {
        if(x%2!=0){
            y=1;
            break;
        }
        x=x/2;
    }
  
    if(y==0)
        printf("%d is a power of 2.",n);
    else
        printf("%d is not a power of 2.",n);
      
    return 0;
}
