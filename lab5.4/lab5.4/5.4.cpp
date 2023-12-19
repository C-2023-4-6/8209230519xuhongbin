#include<iostream>
#include<string>
using namespace std;
class student {
private:
	string num;
	int grade;
public:
	student(string n, int g) {
		num = n;
		grade = g;
	}
	string getnum() {
		return num;
	}
	int getgrade() {
		return grade;
	}
};
string max(student *p) {
	int maxgrade = 0;
	string maxnum;
	for (int i = 0; i < 5; i++) {
		if (p[i].getgrade() > maxgrade) {
			maxgrade = p[i].getgrade();
			maxnum = p[i].getnum();
		}
	}
	return maxnum;
}
int main() {
	student stu[5] = {
		student("1",90),
		student("2",91),
		student("3",88),
		student("4",92),
		student("5",79)
	};
	string maxnum = max(stu);
	cout << maxnum << endl;
	return 0;
}