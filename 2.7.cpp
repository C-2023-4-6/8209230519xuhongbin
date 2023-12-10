#include<stdio.h>
int main(){
	int a = 0;
	while (scanf_s("%d", &a) != EOF) {
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < i + 1; ++j) {
				printf("*");
			}
			printf("\n");
		}
		break;
	}
	return 0;
}