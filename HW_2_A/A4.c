/*
Сумма и произведение трех чисел
Ввести три числа, найти их сумму и произведение.

Формат входных данных
Три целых числа через пробел.

Формат результата

Строка вида
%d+%d+%d=%d
%d*%d*%d=%d
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, sumd, sume;

    //printf("Input 3 number:\n");
    scanf("%d%d%d", &a, &b, &c);
    sumd = a + b + c;
    sume = a * b * c;
    printf("%d+%d+%d=%d\n", a, b, c, sumd);
    printf("%d*%d*%d=%d", a, b, c, sume);

    return 0;
}
