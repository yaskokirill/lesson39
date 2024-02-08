#include <cmath>

bool prime_number_check1(int n) {
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return false;
}

bool prime_number_check2(int n) {
	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return false;
}

bool prime_number_check3(int n) {
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return false;
}