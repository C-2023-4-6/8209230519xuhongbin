#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "��������������" << endl;
	cin >> a >> b;
	c = a * b;
	d = a % b;
	while (d != 0) {
		a = b;
		b = d;
		d = a % b;
	}
	cout << "���Լ��Ϊ��" << b << endl;
	cout << "��С������Ϊ��" << c / b << endl;
	return 0;
}