bool prime_number_check(int n) {
	bool flag = true;

	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0) {
			flag = false;
		}
	}

	return flag;
}