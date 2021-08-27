#ifndef CHITU_INT_HEADER
#define CHITU_INT_HEADER

#include "chitu-types.h"

// Прототипы функций

// Создает нулевой chitu_int
chitu_int chitu_int_empty();
// Возвращает значение int из chitu_val
int64_t chitu_int_get(chitu_int z);
// Устанавливает значение int
void chitu_int_set(chitu_int *z, int64_t i);
// Складывает два значения и возвращает результат
chitu_int chitu_int_plus(chitu_int a, chitu_int b);
// Вычитает два значения и возвращает результат
chitu_int chitu_int_minus(chitu_int a, chitu_int b);
// Умножает два значения и возвращает результат
chitu_int chitu_int_multiply(chitu_int a, chitu_int b);
// Делит нацело два значения и возвращает результат
chitu_int chitu_int_div(chitu_int a, chitu_int b);
// Делит по модулю два значения и возвращает результат
chitu_int chitu_int_mod(chitu_int a, chitu_int b);

#endif // CHITU_INT_HEADER
