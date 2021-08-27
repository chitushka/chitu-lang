#include "chitu-types.h"

int main(int argc, char *argv[]) {
    int64_t i = 57;
    chitu_val z = chitu_val_init(TYPE_INT, CONST_YES, ATTR_PUBLIC);
    chitu_int temp;

    chitu_int_set(&temp, i);
    CHITU_SET_VAL_INT(z, temp);
    chitu_dump(z);

    puts("");

    chitu_int a, b, c;
    chitu_val x = chitu_val_init(TYPE_INT, CONST_NO, ATTR_PUBLIC);
    chitu_int_set(&a, 3);
    chitu_int_set(&b, 0);
    c = chitu_int_div(a, b);
    CHITU_SET_VAL_INT(x, c);
    chitu_dump(x);
}