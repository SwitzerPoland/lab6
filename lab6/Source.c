#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("год %d весокосный\n", year);
    }
    else 
    {
        printf("год %d не весокосный\n", year);
    }
    return 0;
    system("pause");
}
