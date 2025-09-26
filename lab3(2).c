#include <stdio.h>

int main()
{
    int a;
    printf("a= "); scanf("%d", &a);
    if (a>0)
    printf("Число положительное\n");
    else 
    if (a<0)
    printf("Число отрицательное\n");
    else 
    printf("Число = нулю\n");

    if (a % 2 == 0)
    printf("Число четное\n");
    else 
    printf("Число нечетное");
    return 0;
}