#include <stdio.h>
int main()
{
double x,y;
printf("x= ");
scanf("%lf", &x); 
printf("y= "); 
scanf("%lf", &y);
double a,b,c;
a = x * x - 1;
b = (1/(x+1));
c = (-1/(x-1));
if ((y >= a) && ((y <= b) && (y <= c)) && x <= 1 && x >= -1 && y <= 1 && y >= -1)
printf("Принадлежит");
else 
printf("Не принадлежит");
return 0;
}