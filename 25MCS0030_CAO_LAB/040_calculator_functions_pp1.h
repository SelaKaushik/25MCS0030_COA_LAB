#include "stdio.h"

int fn_calculator_add(int a, int b) {
	return a + b;
}

int fn_calculator_sub(int a, int b) {
	if (b > a) {
		return b - a;
	}
	else {
		return a - b;
	}
}

