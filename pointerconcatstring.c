#include <stdio.h>
#include<string.h>
#define MAX_SIZE 20
int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char *s1=str1;
    char *s2=str2;
    printf("String 1 : ");
    gets(str1);
    printf("String 2 : ");
    gets(str2);
    while(*(++s1));
    while(*(s1++) = *(s2++));
    printf("Concatenated string : %s",str1);
    return 0;
}
