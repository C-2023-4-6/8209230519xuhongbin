#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;//溢出无法显示
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:短整型为2字节，65534=2^32-2，所以结果为-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
	system("pause");
	return 0;
	}