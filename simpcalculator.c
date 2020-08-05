#include <stdio.h>
 
int main()
{
    int a,b;
    float r;
    char ch; 
     
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
     
    printf("Choose operation to perform ( + , - , * , / , % ): ");
    scanf(" %c",&ch);
     
    r=0;
    switch(ch)    
    {
        case '+':
            r=a+b;
            break;
             
        case '-':
            r=a-b;
            break;
         
        case '*':
            r=a*b;
            break;
             
        case '/':
            r=a/b;
            break;
             
        case '%':
            r=a%b;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",a,ch,b,r);
    return 0;
}
