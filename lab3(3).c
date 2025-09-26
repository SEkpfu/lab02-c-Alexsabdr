#include <stdio.h>
#include <math.h>

int main()
{
    double f, x;
    printf("x= "); scanf("%lf", &x);
    if (x<=-2)
    f = 0;
    else
        if ( -2 < x <= 10)
            (f = x * x + 4 *x + 5);
    else
    f = 1 / (x * x + 4 * x + 5);
    printf ("%.2f\n", f);
        if (f );
            printf("Ответ содержит нечисловое значение");
    return 0;
}