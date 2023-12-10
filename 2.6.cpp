#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	c = a * b;
	d = a % b;
	while (d != 0) {
		a = b;
		b = d;
		d = a % b;
	}
	cout << "最大公约数为：" << b << endl;
	cout << "最小公倍数为：" << c / b << endl;
	return 0;
}