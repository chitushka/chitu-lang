#include "chitu-string.h"

// 
chitu_string chitu_string_empty() {
	chitu_string result;
	
	result.str = "";
	result.length = 0;
	
	return result;
}

// 
char *chitu_string_get_raw(chitu_val z) {
	char *result;
	
	result = CHITU_VAL_STRING(z).str;
	
	return result;
}

//
chitu_string chitu_string_set_raw(chitu_val z, char *str) {
	chitu_string result;
	
	result = CHITU_VAL_STRING(z);
	result.str = str;
	
	return result;
}

/*
chitu_string chitu_string_get(chitu_val z) {
	chitu_string result;
	char* str = malloc(100);
	
	switch (CHITU_TYPE_GET(z)) {
		case TYPE_BOOL:
			if (CHITU_TRUE == chitu_bool_get_raw(z)) {
				str = "1";
			} else {
				str = "0";
			}
			break;
		case TYPE_FLOAT: sprintf(str, "%f", chitu_float_get_raw(z)); break;
		case TYPE_INT: sprintf(str, "%ld", chitu_int_get_raw(z)); break;
		case TYPE_STRING: str = chitu_string_get_raw(z); break;
		default: str = ""; break;
	}
	result = chitu_string_set_raw(z, str);

	return result;
}
*/
//
void chitu_string_set(chitu_val *z, chitu_string s) {
	z->type = TYPE_STRING;
	z->val.strVal = s;
}
