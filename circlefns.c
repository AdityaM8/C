#include<stdio.h> 
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
  float r,ar,circ,d;
  printf("\nEnter the radius of a circle: ");
  scanf("%f",&r);
  d=2*r;
  circ=2*pi*r;
  ar=pi*r*r; 
  printf("\nDiameter=%.2f\n",d);
  printf("\nCircumference %.2f\n",circ);
  printf("\nArea=%.2f\n",ar);
  return 0;
}
