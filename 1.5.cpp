#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	float F, C;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "对应的摄氏温度是" << fixed << setprecision(2) << C << endl;
	return 0;
}