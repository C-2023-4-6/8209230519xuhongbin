#include<iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x;
	if (0 < x&&x < 1)
		y = 3 - 2 * x, cout << "y=" << y << endl;
	else
		if (1 <= x&&x < 5)
			y = 2 / (4 * x) + 1, cout << "y=" << y << endl;
		else
			if (5 <= x&&x < 10)
				y = x * x, cout << "y=" << y << endl;
			else
				cout << "´íÎó" << endl;
	return 0;
}