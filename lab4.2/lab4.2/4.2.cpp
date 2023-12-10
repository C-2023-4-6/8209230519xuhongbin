#include<iostream>
using namespace std;
const int a = 10;
void bubble(double list[10]) {
	double temp;
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < a - 1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}
int main() {
	double list[a];
	cout << "请输入十个数：" << endl;
	for (int i = 0; i < a; i++)
		cin >> list[i];
	bubble(list);
	for (int k = 0; k < a; k++)
		cout << list[k] << " ";
	cout << endl;
	return 0;
}