#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a, b, c;
	cout << "������һ����" << endl;
	cin >> a;
	if (a < 0) {
		b = -a;
		a = b;
		b = a / 2;
		c = (b + a / b) / 2;
		do {
			b = c;
			c = (b + a / b) / 2;
		} while (fabs(b - c) >= 1e-5);
		cout << b << "i" << endl;
		return 0;
	}
	else {
		b = a / 2;
		c = (b + a / b) / 2;
		do {
			b = c;
			c = (b + a / b) / 2;
		} while (fabs(b - c) >= 1e-5);
	}

	cout << "ƽ�����ǣ�" << b << endl;
	return 0;
}