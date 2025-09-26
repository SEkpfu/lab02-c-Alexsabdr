#include <stdio.h>
int main()
{
float x,y;
printf("x= ");
scanf("%f", &x); 
printf("y= "); 
scanf("%f", &y);
float a,b,c,d;
a = x + 1;
b = x - 1;
c = -x + 1;
d = -x - 1;
if (((y <= a) && (y >= b)&& (y <= c) && (y >= d)) && x<=1 && x >= -1)
printf("Принадлежит");
else 
printf("Не принадлежит");
return 0;


}