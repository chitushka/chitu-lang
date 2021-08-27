#ifndef CHITU_COMMON_HEADER
#define CHITU_COMMON_HEADER

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define CHITU_PREFIX(z) chitu__##z
#define CHI(z) CHITU_PREFIX(z)

// Константы для типа chitu_bool
#define CHITU_TRUE (true)
#define CHITU_FALSE (false)

// Получение типа переменной
#define CHITU_TYPE_GET(z) (z).type

// Получение значения переменной определенного типа
#define CHITU_VAL_BOOL(z) (z).val.boolVal
#define CHITU_VAL_FLOAT(z) (z).val.floatVal
#define CHITU_VAL_INT(z) (z).val.intVal
#define CHITU_VAL_STRING(z) (z).val.strVal

#define CHITU_SET_VAL_BOOL(z, b) CHITU_VAL_BOOL(z) = b
#define CHITU_SET_VAL_FLOAT(z, f) CHITU_VAL_FLOAT(z) = f
#define CHITU_SET_VAL_INT(z, i) CHITU_VAL_INT(z) = i
#define CHITU_SET_VAL_STRING(z, str) CHITU_VAL_STRING(z) = str

// Возможные типы данных
typedef enum CHI(type_t) {
	TYPE_BOOL,	
	TYPE_FLOAT,
	TYPE_INT,	
	TYPE_STRING
} chitu_type;

// Тип логического значения
typedef struct CHI(bool_t) {
	bool b;
} chitu_bool;

// Тип вещественного значения
typedef struct CHI(float_t) {
	double f;
} chitu_float;

// Тип целочисленного значения
typedef union CHI(int_t) {
	// signed
	int8_t i8;
	int16_t i16;
	int32_t i32;
	int64_t i64;
	// unsigned
	uint8_t ui8;
	uint16_t ui16;
	uint32_t ui32;
	uint64_t ui64;
} chitu_int;

// Тип строкового значения
typedef struct CHI(string_t) {
	char *str;
	size_t length;
} chitu_string;

// Возможные спецификаторы видимости
typedef enum CHI(attribute_t) {
	ATTR_PUBLIC,
	ATTR_PRIVATE
} chitu_attribute;

// Возможные константы
typedef enum CHI(const_t) {
    CONST_YES,
    CONST_NO
} chitu_const;

typedef struct CHI(val_t) {
	chitu_type type; // Тип значения
	union {
		chitu_bool boolVal;
		chitu_float floatVal;
		chitu_int intVal;
		chitu_string strVal;
	} val;
	chitu_attribute attribute; // видимость
    chitu_const is_const; // Является ли переменная константой (0-нет, 1-да является)
} chitu_val;

//----------------------------------------------------------------------------
// Прототипы функций

// Создает пустое значение chitu_val типа chitu_type
chitu_val chitu_val_init(chitu_type t, chitu_const is_const, chitu_attribute attr);
// Устанавливает тип значения
void chitu_change_type(chitu_val *z, chitu_type t);
// Устанавливает константой или переменной
void chitu_change_const(chitu_val *z, chitu_const c);
// Устанавливает аттрибут
void chitu_change_attribute(chitu_val *z, chitu_attribute attr);
// Выводит dump значения
void chitu_dump(chitu_val z);

#include "chitu-bool.h"
#include "chitu-float.h"
#include "chitu-int.h"
#include "chitu-string.h"

#endif // CHITU_COMMON_HEADER
