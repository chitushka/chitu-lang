#include "chitu-types.h"


chitu_val chitu_val_init(chitu_type t, chitu_const is_const, chitu_attribute attr) {
	chitu_val result;
	// Инициализируем пустые значения
	chitu_bool b = chitu_bool_empty();
	chitu_float f = chitu_float_empty();
	chitu_int i = chitu_int_empty();
	chitu_string s = chitu_string_empty();

    chitu_change_type(&result, t);
    chitu_change_const(&result, is_const);
    chitu_change_attribute(&result, attr);
	
		switch (t) {
			case TYPE_BOOL: CHITU_VAL_BOOL(result) = b; break;
			case TYPE_FLOAT: CHITU_VAL_FLOAT(result) = f; break;
			case TYPE_INT: CHITU_VAL_INT(result) = i; break;
			case TYPE_STRING: CHITU_VAL_STRING(result) = s; break;
			default: CHITU_VAL_INT(result) = i; break;
	}
	
	return result;
}

void chitu_change_type(chitu_val *z, chitu_type t) {
    z->type = t;
}

void chitu_change_const(chitu_val *z, chitu_const c) {
	z->is_const = c;
}

void chitu_change_attribute(chitu_val *z, chitu_attribute attr) {
    z->attribute = attr;
}

void chitu_dump(chitu_val z) {	
	switch (CHITU_TYPE_GET(z)) {
		case TYPE_BOOL: printf("(bool) = %s\n", CHITU_TRUE == chitu_bool_get_raw(z) ? "true" : "false"); break;
		case TYPE_FLOAT: printf("(float) = %.5f\n", chitu_float_get_raw(z)); break;
		case TYPE_INT: printf("(int) = %ld\n", chitu_int_get(CHITU_VAL_INT(z))); break;
		case TYPE_STRING: printf("(string)[length] = \"%s\"[%lu]\n", chitu_string_get_raw(z), strlen(
                    chitu_string_get_raw(z))); break;
		default: printf("(int) = %ld\n", chitu_int_get(CHITU_VAL_INT(z))); break;
	}
	
	if (CONST_NO == z.is_const) {
		printf("type = %s\n", "VAR");
	} else {
		printf("type = %s\n", "CONST");
	}
	
	switch (z.attribute) {
		case ATTR_PUBLIC: printf("attribute = %s\n", "PUBLIC"); break;	
		case ATTR_PRIVATE: printf("attribute = %s\n", "PRIVATE"); break;
		default: printf("attribute = %s\n", "PUBLIC"); break;
	}
}
