#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    int x;
    x = a + b + c;
    (x > 10) ? printf("%d", x) : printf("Сумма меньше 10");

    int ch;
    ch += (a % 2) == 0 ? 1 : 0; 
    ch += (b % 2) == 0 ? 1 : 0; 
    ch += (c % 2) == 0 ? 1 : 0; 
    printf("Количество четных чисел:%d", ch);

    max1 = a > b ? a : b;
    max1 = max1 > c ? max1 : c;
    min1 = a < b ? a : b;
    min1 = min1 < c ? min1 : c;
    sr = ((max1 ==  a && min1 == b) || (max1 == b && min1 == a)) ? c :
    ((max1==c && min1 == b)||(min1 == c && max1 == b)) ? a : b;

    
    printf("Среднее из этих чисел:%f",sr);

     int nc;
    min1 = a < b ? a : b;
    min1 = min1 < c ? min1 : c;
    nc = min1 == a ? 1 : 
    min1 == b ? 2 : 3;
    printf("%d", nc);
printf("Наименьший элемент в массиве: %d", nc);
    return 0;

}

}
