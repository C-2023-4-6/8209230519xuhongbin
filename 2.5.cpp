#include<iostream>
using namespace std;
int main() {
	char a;
	int num = 0;
	int space = 0;
	int letter = 0;
	int other = 0;
	cout << "������һ���ַ���" << endl;
	while ((a = getchar()) && a!='\n') {
		if (a >= '0'&&a <= '9') {
			num++;
		}
		else if (a == ' ') 
		{
			space++;
		}
		else if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z')) 
		{
			letter++;
		}
		else { other++; }
	}
	cout << "���ָ���Ϊ��" << num << endl;
	cout << "�ո����Ϊ��" << space << endl;
	cout << "��ĸ����Ϊ��" << letter << endl;
	cout << "��������Ϊ��" << other << endl;
	return 0;
}