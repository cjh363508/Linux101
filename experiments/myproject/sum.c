#include "include/sum.h"

int sum(int x, int y) {
	int sum=0,i;
	for(i=x;i<=y;++i)
		sum+=i;
	return sum;
}

