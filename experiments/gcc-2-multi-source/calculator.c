#include "include/calculator.h"

int sum(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int divisor) {
	if(0!=divisor)
	return x / divisor;
	else return 0;//除数为0，返回0
}
