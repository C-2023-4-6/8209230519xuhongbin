#include<iostream>
#include<map>
using namespace std;
float add(float num1, float num2) { return num1 + num2; }
float sub(float num1, float num2) { return num1 - num2; }
float mul(float num1, float num2) { return num1 * num2; }
float div(float num1, float num2) { return num1 / num2; }
double result;
int main() {
	map<char, float(*)(float, float)>fun;
	fun['+'] = add;
	fun['-'] = sub;
	fun['*'] = mul;
	fun['/'] = div;
	char fu;
	float a, b;
	cout << "�����������" << endl;
	cin >> fu;
	cout << "������������" << endl;
	cin >> a >> b;
		switch (fu) {
		case '+':
			result = add(a,b);
			break;
		case '-':
			result = sub(a, b);
			break;
		case '*':
			result = mul(a, b);
			break;
		case'/':
			if (b == 0) {
				cout << "���ܳ���0" << endl;
				return 0;
			}
			else {
				result = div(a, b);
				break;
			}
		default:
			cout << "��Ч�������" << endl;
			return 0;
		}
	cout << "���:" << result << endl;
	return 0;
}