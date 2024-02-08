#include <iostream>
#include <ctime>

using namespace std;

bool prime_number_check1(int n);
bool prime_number_check2(int n);
bool prime_number_check3(int n);

int main() {
	int n = 2147483647;
	
	long start_time = time(NULL);
	bool result = prime_number_check1(n);
	long end_time = time(NULL);

	//cout << (result ? "Prime number" 
	//	: "Not prime number") << endl;

	cout << (end_time - start_time) << " sec." << endl;

	start_time = time(NULL);
	result = prime_number_check2(n);
	end_time = time(NULL);

	cout << (end_time - start_time) << " sec." << endl;

	start_time = time(NULL);
	result = prime_number_check3(n);
	end_time = time(NULL);

	cout << (end_time - start_time) << " sec." << endl;

	return 0;
}