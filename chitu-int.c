#include "chitu-int.h"

chitu_int chitu_int_empty() {
	chitu_int result;
	
	result.i64 = 0;
	
	return result;
}

int64_t chitu_int_get(chitu_int z) {
    return z.i64;
}

void chitu_int_set(chitu_int *z, int64_t i) {
	z->i64 = i;
}
/*
// Возвращает chitu_int из chitu_val приводя тип
chitu_int chitu_int_get(chitu_val val) {
	chitu_int result;
	int64_t i;
	
	switch (CHITU_TYPE_GET(val)) {
		case TYPE_BOOL:
			if (CHITU_TRUE == chitu_bool_get_raw(val)) {
				i = 1;
			} else {
				i = 0;
			}
			break;	
		case TYPE_FLOAT: i = (int64_t) chitu_float_get_raw(val); break;
		case TYPE_INT: i = chitu_int_get_raw(val); break;
		case TYPE_STRING: i = atol(chitu_string_get_raw(val)); break;
		default: i = 0; break;
	}
	result = chitu_int_set_raw(val, i);
	
	return result;
}
*/

chitu_int chitu_int_plus(chitu_int a, chitu_int b) {
    chitu_int c;

    c.i64 = a.i64 + b.i64;

    return c;
}

chitu_int chitu_int_minus(chitu_int a, chitu_int b) {
    chitu_int c;

    c.i64 = a.i64 - b.i64;

    return c;
}

chitu_int chitu_int_multiply(chitu_int a, chitu_int b) {
    chitu_int c;

    c.i64 = a.i64 * b.i64;

    return c;
}

chitu_int chitu_int_div(chitu_int a, chitu_int b) {
    chitu_int c;

    if (0 == b.i64) {
        c.i64 = 0;
        printf("\n-----\tERROR: DIVIDE BY ZERO!\n");
        exit(1);
    } else {
        c.i64 = a.i64 / b.i64;
    }

    return c;
}

chitu_int chitu_int_mod(chitu_int a, chitu_int b) {
    chitu_int c;

    c.i64 = a.i64 % b.i64;

    return c;
}