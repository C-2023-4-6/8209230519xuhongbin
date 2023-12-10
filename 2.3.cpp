#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "请输入三边长度，a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >> b;
	cout << "c=" << endl;
	cin >> c;
	if (a + b > c&&a + c > b&&b + c > a)
		if (a == b || a == c || b == c)
			cout << "是等腰三角形，周长为：" << a + b + c << endl;
		else
			cout << "不是等腰三角形，周长为："<< a + b + c << endl;
	else
		cout << "不能构成三角形" << endl;
	return 0;
}