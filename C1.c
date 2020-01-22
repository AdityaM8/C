#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned long int a=4294967296;
printf("\nsize of Unsigned integer is %u",sizeof(unsigned int));
printf("\nsize of signed integer is %d",sizeof(int));
printf("\nsize of Long integer is %ld",sizeof(unsigned int));
printf("\nsize of character is %c",sizeof(char));
printf("\nsize of float is %f",sizeof(float));
printf("\nMax size of stored : %u",a);

getch();
}

