#include<iostream>
int main()
{
	int b = 1;
	for (int i = 9; i > 0; i--)
	{
		b = 2 * (b + 1);
	}
	std::cout << "��һ��ժ��" << b << "������" << std::endl;
	return 0;
}