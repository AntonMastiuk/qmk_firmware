#ifndef KB_H
#define KB_H

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22,      \
	K30, K31, K32, K33, \
	K40, K41, K42,      \
	     K51, K52, K53  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   KC_NO }, \
	{ K30,   K31,   K32,   K33 }, \
	{ K40,   K41,   K42,   KC_NO }, \
	{ KC_NO, K51,   K52,   K53 }  \
}

#endif