#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)

{ 
double a1, b1, a2, b2, a3, b3;
printf("Введите стороны 1-го прямоугольника \n");
printf("a1= "); scanf("%lf", &a1);
printf("b1= "); scanf("%lf", &b1);
printf("Введите стороны 2-го прямоугольника \n");
printf("a2= "); scanf("%lf", &a2);
printf("b2= "); scanf("%lf", &b2);
printf("Введите стороны 3-го прямоугольника \n");
printf("a3= "); scanf("%lf", &a3);
printf("b3= "); scanf("%lf", &b3);
double s1, s2, s3;
s1 = a1 * b1;
s2 = a2 * b2;
s3 = a3 * b3;
double m;
m = std::max(s1,s2);
m=std::max(s2,s3);
m=std::max(s1,m);
cout << "Max s =" << m; ///"max площадь = " << m;
return 0;
}