#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,r;
    printf("x= ");
    scanf("%lf", &x);
    printf("y= ");
    scanf("%lf", &y);
    r = 6;
    double a,b,c;
    a = 2 * x + 6;
    b = -2 * x - 6;
    c = x - 6;
    if (pow(x,2) + pow (y,2) <= pow(r,2))
    printf("Принадлежит");
    else 
    if (y <= a && y <= 0 && x >= 0)
    printf("Принадлежит");
    else 
    if (y >= b && y <= 0 && x <= 0)
       printf("Принадлежит");
    else 
    if (y <= c && y <= 0 && x >= 0)
    printf("Принадлежит");
    else 
    printf("Не принадлежит");
    return 0;
}