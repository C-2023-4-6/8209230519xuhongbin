#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main() {
	const int shuliang = 200;
	const int line = 10;
	int count = 0;
	int number = 2;
	while (count < 200) {
		if (is_prime(number)) {
			count++;
			if (count % line == 0) {
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
	return 0;
}