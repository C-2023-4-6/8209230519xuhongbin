#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "���������߳��ȣ�a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >> b;
	cout << "c=" << endl;
	cin >> c;
	if (a + b > c&&a + c > b&&b + c > a)
		if (a == b || a == c || b == c)
			cout << "�ǵ��������Σ��ܳ�Ϊ��" << a + b + c << endl;
		else
			cout << "���ǵ��������Σ��ܳ�Ϊ��"<< a + b + c << endl;
	else
		cout << "���ܹ���������" << endl;
	return 0;
}