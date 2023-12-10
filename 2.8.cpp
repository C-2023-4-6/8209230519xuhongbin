#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入一个数" << endl;
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

	cout << "平方根是：" << b << endl;
	return 0;
}