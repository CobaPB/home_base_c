/*
Наибольшее из трех чисел
Ввести три числа и найти наибольшее из них

Input format
Три целых числа через пробел

Output format
Одно наибольшее целое число
*/

/*
суть сначала нам надо стравнить первое число со всеми
если оно больше то печатаем его

если нет то сравниеваем второе и третие число
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int8_t a, b, c;
    scanf("%" SCNd8 "%" SCNd8 "%" SCNd8, &a, &b, &c);
    if (a >= b && a >=c){
        printf("%" PRId8, a);
    }
    else if (a <= b && b <= c){
        printf("%" PRId8, c);
    }
    else if (a <= b && b >= c){
        printf("%" PRId8, b);
    }
    else
        return 0;
}
