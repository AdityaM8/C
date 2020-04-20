#include <stdio.h>
#define r 4
#define c 4
int main()
{
    int a[r][c],b[r][c],d[r][c],i,j;
    printf("\n\t Enter elements of matrix A  :  ");
    for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
              {
                  scanf("%d",&a[i][j]);
              }
       }
    printf("\n\t Enter elements of matrix B  :  ");
    for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
              {
                  scanf("%d",&b[i][j]);
                  d[i][j]=a[i][j]+b[i][j];
                  }
       }
    printf("\n\t Enter elements of matrix A  :  ");
    for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
              {
                  printf("%d  ",d[i][j]);
              }
            printf("\n");
       }
    return 0;
}

