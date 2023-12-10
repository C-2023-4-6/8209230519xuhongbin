#include<iostream>
#include<string>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int temp;
	for (int j = 0; j < size1; j++)
		list3[j] = list1[j];
	for (int k = 0; k < size2; k++)
		list3[size1 + k] = list2[k];
	cout << "The merged list is ";
	for(int m=0;m<(size1+size2)-1;m++)
		for(int n=0;n<(size1+size2)-1;n++)
			if (list3[n] > list3[n + 1]) {
				temp = list3[n];
				list3[n] = list3[n + 1];
				list3[n + 1] = temp;
			}
	for (int a = 0; a < (size1 + size2); a++)
		cout << list3[a] << " ";
}
int main() {
	int size1;
	cout << "Enter list1:";
	cin >> size1;
	int *list1=new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	int size2;
	cout << "Enter list2:";
	cin >> size2;
	int *list2 = new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	int size3;
	size3 = size1 + size2;
	int *list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
	cout << endl;
	return 0;
}