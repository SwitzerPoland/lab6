#include <stdio.h>
#include <math.h>
#include <locale.h>

double calc(double x) {
    return (x >= 3.0) ? (-pow(x, 2) + 3.0 * x + 9.0) : (x / (pow(x, 3) - 6.0));
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Результат F(x) = %.6f\n", calc(x));
    return 0;
    system("pause");
}
