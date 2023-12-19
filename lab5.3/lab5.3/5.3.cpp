#include<iostream>
using namespace std;
class volume {
public:
	void input();
	void cal();
	void show();
private:
	int length;
	int width;
	int height;
	int volume;
};
void volume::input() {
	cout << "input length:" << endl;
	cin >> length;
	cout << "input width:" << endl;
	cin >> width;
	cout << "input height:" << endl;
	cin >> height;
}
void volume::cal() {
	volume = length * width*height;
}
void volume::show() {
	cout << "volume=" << volume << endl << endl;
}
int main() {
	volume v[3];
	int i = 0;
	for (i = 0; i < 3; i++) {
		v[i].input();
		v[i].cal();
		v[i].show();
	}
	return 0;
}