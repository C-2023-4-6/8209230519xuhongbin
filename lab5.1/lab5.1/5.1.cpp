#include<iostream>
using namespace std;
class Time //定义Time类
{
private:  //数据类型为私有的
	int hour;
	int min;
	int sec;
public:
	void sethour(int h) {
		hour = h;
	}
	int rehour() {
		return hour;
	}
	void setmin(int m) {
		min = m;
	}
	int remin() {
		return min;
	}
	void setsec(int s) {
		sec = s;
	}
	int resec() {
		return sec;
	}
	void settime(int h, int m, int s) {
		sethour(h);
		setmin(m);
		setsec(s);
	}
};
int main() {
	Time t1;
	int a1, a2, a3;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	t1.settime(a1, a2, a3);
	cout << t1.rehour() << ":" << t1.remin() << ":" << t1.resec() << endl;
	return 0;
}