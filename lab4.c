#include <stdio.h>
int main()
{
    int d,m,g;
    printf("Введите дату вашего рождения:");
    scanf("%d.%d.%d", &d, &m, &g);
    if (m == 1)
    printf("%d января %d\n", d,g);
    if (m == 2)
    printf("%d февраля %d\n", d,g);
    if (m == 3)
    printf("%d марта %d\n", d,g);
    if (m == 4)
    printf("%d апреля %d\n", d,g);
    if (m == 5)
    printf("%d мая %d\n", d,g);
    if (m == 6)
    printf("%d июня %d\n", d,g);
    if (m == 7)
    printf("%d июля %d\n", d,g);
    if (m == 8)
    printf("%d августа %d\n", d,g);
    if (m == 9)
    printf("%d сентября %d\n", d,g);
    if (m == 10)
    printf("%d октября %d\n", d,g);
    if (m == 11)
    printf("%d ноября %d\n", d,g);
    if (m == 12)
    printf("%d декабря %d\n", d,g);
    switch(m) {
    case 1:
    case 2:
    case 12: printf("Зима"); break;
    case 3:
    case 4:
    case 5: printf("Весна"); break;
    case 6:
    case 7:
    case 8: printf("Лето"); break;
    case 9:
    case 10:
    case 11: printf("Осень"); break;
    default:
    }
    return 0;
}