#include <stdio.h>
#include <math.h>

int main(void) {
double y, a;
double e = 0.1;

printf("Insira o valor de Y: ");
scanf("%lf", &y);

a = y / 2;

while (fabs(a - y / a) > e * a) {
a = (a + y / a) / 2;
}

printf("A raiz quadrada de Y é aproximadamente %lf\n", a);
printf("O valor retornado pela função sqrt é %lf\n", sqrt(y));

return 0;
}