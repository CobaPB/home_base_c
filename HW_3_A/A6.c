/*
Разность двух чисел
Ввести два числа и найти их разность.

Input format
Два целых числа

Output format
Ответ - одно целое число
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t a, b, c;
    scanf("%" SCNd32 "%" SCNd32, &a, &b);
    c = a - b;
    printf("%" PRId32, c);

    return 0;
}

