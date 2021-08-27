#ifndef CHITU_BOOL_HEADER
#define CHITU_BOOL_HEADER

#include "chitu-types.h"

// Прототипы функций
chitu_bool chitu_bool_empty();
bool chitu_bool_get_raw(chitu_val z);
chitu_bool chitu_bool_set_raw(chitu_val z, bool b);
chitu_bool chitu_bool_get(chitu_val z);
chitu_val chitu_bool_set(chitu_val z, chitu_bool b);

#endif // CHITU_BOOL_HEADER
