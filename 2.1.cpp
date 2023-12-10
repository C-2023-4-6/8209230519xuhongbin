#include<iostream>
#include<cctype>
using namespace std;
int main(void) {
	char a;
	cin >> a;
	if (islower(a))
		a = toupper(a),cout << a << endl;
	else
		cout << (int)a << endl;
	return 0;
}