#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	float F, C;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "��Ӧ�������¶���" << fixed << setprecision(2) << C << endl;
	return 0;
}