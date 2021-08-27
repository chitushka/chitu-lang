#ifndef CHITU_STRING_HEADER
#define CHITU_STRING_HEADER

#include "chitu-types.h"

// Прототипы функций
chitu_string chitu_string_empty();
char *chitu_string_get_raw(chitu_val z);
chitu_string chitu_string_set_raw(chitu_val z, char *str);
chitu_string chitu_string_get(chitu_val z);
void chitu_string_set(chitu_val *z, chitu_string s);

#endif // CHITU_STRING_HEADER
