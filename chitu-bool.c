#include "chitu-bool.h"

// Реализация функций
chitu_bool chitu_bool_empty() {
	chitu_bool result;
	
	result.b = CHITU_FALSE;
	
	return result;
}

// Получаем логическое (bool) значение из chitu_val
bool chitu_bool_get_raw(chitu_val z) {
	bool result;
	
	result = CHITU_VAL_BOOL(z).b;
	
	return result;
}

// 
chitu_bool chitu_bool_set_raw(chitu_val z, bool b) {
	chitu_bool result;
	
	result = CHITU_VAL_BOOL(z);
	result.b = b;
	
	return result;
}

/*
chitu_bool chitu_bool_get(chitu_val z) {
	chitu_bool result;
	bool b;
	double d;
	int64_t i;
	
	switch (CHITU_TYPE_GET(z)) {
		case TYPE_BOOL: b = chitu_bool_get_raw(z); break;
		case TYPE_FLOAT:
			d = chitu_float_get_raw(z);
			// Надо заменить константу 0.000001 на машинный ноль
			if (fabs(d) < 0.000001) {
				b = CHITU_FALSE;
			} else {
				b = CHITU_TRUE;
			}
			break;
		case TYPE_INT:
			i = chitu_int_get_raw(z);
			if (0 == i) {
				b = CHITU_FALSE;
			} else {
				b = CHITU_TRUE;
			}			
			break;
		case TYPE_STRING: b = CHITU_FALSE; break;
		default: b = CHITU_FALSE; break;
	}
	result = chitu_bool_set_raw(z, b);
	
	return result;	
}
*/
//
chitu_val chitu_bool_set(chitu_val z, chitu_bool b) {
	chitu_val result;
	
	result = z;
	result.type = TYPE_BOOL;
	result.val.boolVal = b;
	
	return result;
}
