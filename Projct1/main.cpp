#include <iostream>

using namespace std;

bool prime_number_check(int n);

int main() {
	int n;
	string msg;

	cout << "Input a number: ";
	cin >> n;

	msg = prime_number_check(n) ? "This is a prime number" : "This is not a prime number";
	cout << msg;

	return 0;
}