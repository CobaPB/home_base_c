/*
Above, less, equal
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.

Input format
Два целых числа

Output format
Одно единственное слово: Above, Less, Equal
*/

/*
тут в целом понятно надо сделать с каждым числом вычеслительное выражение
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int8_t a, b;
    scanf("%" SCNd8 "%" SCNd8, &a, &b);
    if (a > b){
        printf("Above");
    }
    else if (a < b){
        printf("Less");
    }
    else if (a == b){
        printf("Equal");
    }
    else
        return 0;
}
