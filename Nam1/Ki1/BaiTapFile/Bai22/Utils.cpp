#include "Utils.h"

bool isPrime(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 3; i < n; i+=2)
	{
		if (n % i == 0) {
			return 0;
		}
	}
	return 1 && (n!=2) && (n%2);
}

void arrPrime(int res[], int min, int max) {
	res[0] = 0;
	for (int i = min; i <= max; i++)
	{
		if (isPrime(i)) {
			res[++res[0]] = i;
		}
	}
}
