#include<iostream>
using namespace std;
int main() {
	int b = 2;
	int c = 0;
	int i = 0;
	while (c < 100){
		c = b + c;
		b = 2 * b;
			i++;
	}
	cout << c * 0.8 / i << endl;
	return 0;
}