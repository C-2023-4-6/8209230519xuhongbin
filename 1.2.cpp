#include<iostream>
using namespace std;
int main()
{
	int r; int h; const double pi = acos(-1.0);
	cout << "ÇëÊäÈëÔ²×¶µ×Ãæ°ë¾¶" << endl;
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> h;
	cout << r * r * h / 3 *pi<< endl;
	return 0;
}