#include <stdio.h>

void swap(int* a, int* b);

int main() {
	int a = 0, b = 0;
	printf("���� 2�� �Է� : ");
	scanf_s("%d %d", &a, &b);
	printf("��ȯ �� a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("��ȯ �� a : %d, b : %d", a, b);
}

void swap(int* a, int* b) {
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}