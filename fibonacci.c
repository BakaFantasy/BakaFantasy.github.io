#include <stdio.h>
#define N 50

long dp1 = 1, dp2 = 1;

long Fib(long n) {
	if (n <= 1)
		return 1;
	long tmp = 0;
	for (long i = 2; i <= n; i++) {
		tmp = dp1 + dp2;
		dp2 = dp1;
		dp1 = tmp;
	}
	return tmp;
}

int main(void) {
	printf("%ld\n", Fib(N));	
	return 0;
}
