#include "chitu-float.h"

// Возвращает значение chitu_float равное нулю
chitu_float chitu_float_empty() {
	chitu_float result;
	
	result.f = 0.0;
	
	return result;
}

// Устанавливает значение double и возвращает новое его
chitu_float chitu_float_set_raw(chitu_val z, double f) {
	chitu_float result;
	
	result = CHITU_VAL_FLOAT(z);
	result.f = f;
	
	return result;
}

// Возвращает значение double из chitu_val
double chitu_float_get_raw(chitu_val z) {
	double result;
	
	result = CHITU_VAL_FLOAT(z).f;
	
	return result;
}
/*
// Возвращает chitu_float из chitu_val приводя тип
chitu_float chitu_float_get(chitu_val z) {
	chitu_float result;
	double f;
	
	switch (CHITU_TYPE_GET(z)) {
		case TYPE_BOOL:
			if (CHITU_TRUE == chitu_bool_get_raw(z)) {
                f = 1.0;
			} else {
                f = 0.0;
			}
			break;	
		case TYPE_FLOAT: f = chitu_float_get_raw(z); break;
		case TYPE_INT: f = (double)chitu_int_get_raw(z); break;
		case TYPE_STRING: f = atof(chitu_string_get_raw(z)); break;
		default: f = 0.0; break;
	}
	result = chitu_float_set_raw(z, f);
	
	return result;
}
*/
//
chitu_val chitu_float_set(chitu_val z, chitu_float f) {
	chitu_val result;
	
	result = z;
	result.type = TYPE_FLOAT;
	result.val.floatVal = f;
	
	return result;
}
