#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int i = 0; i < a; i++) {
		s3[i] = false;
	}
	for (int i = 0; i < b - a + 1; i++) {
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++) {//j测s1，k测s2
			if (s1[j] == s2[k]) {
				index = i;
				s3[j] = true;
			}
		}
		int h = 0;
		for (int i = 0; i < a; i++) {
			if (s3[i] == false && i == b - a) {
				return -1;
				break;
			}
			if (s3[i]) {
				h++;
			}
		}
		if (h == a) {
			return index;
		}
	}
	delete[]s3;
}
int main() {
	int size = 999;
	char* s1 = new char[size];
	cout << "请输入s1：" << endl;
	cin.getline(s1, size);
	char* s2 = new char[size];
	cout << "请输入s2：" << endl;
	cin.getline(s2, size);
	cout << "检验" << s1 << "与" << s2 << "结果为：" << indexOf(s1, s2) << endl;
	delete[]s1;
	delete[]s2;
}