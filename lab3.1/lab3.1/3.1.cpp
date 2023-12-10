#include<iostream>
using namespace std;
void divi(int a,int b,int&i) {
	int d;
	d = a % b;
	while (d != 0) {
		a = b;
		b = d;
		d = a % b;
	}
	i = b;
	cout << "最大公约数为：" << b << endl;
}
int main() {
	int a, b, c;
	int &i = b;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	c = a * b;
	divi(a, b,i);
	cout << "最大公约数为：" << i << endl;
	cout << "最小公倍数为：" << c / i << endl;
	return 0;
}