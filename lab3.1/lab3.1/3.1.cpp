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
	cout << "���Լ��Ϊ��" << b << endl;
}
int main() {
	int a, b, c;
	int &i = b;
	cout << "��������������" << endl;
	cin >> a >> b;
	c = a * b;
	divi(a, b,i);
	cout << "���Լ��Ϊ��" << i << endl;
	cout << "��С������Ϊ��" << c / i << endl;
	return 0;
}