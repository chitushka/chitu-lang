#ifndef CHITU_FLOAT_HEADER
#define CHITU_FLOAT_HEADER

#include "chitu-types.h"

// Прототипы функций
chitu_float chitu_float_empty();
double chitu_float_get_raw(chitu_val z);
chitu_float chitu_float_set_raw(chitu_val z, double f);
chitu_float chitu_float_get(chitu_val z);
chitu_val chitu_float_set(chitu_val z, chitu_float f);

#endif // CHITU_FLOAT_HEADER
