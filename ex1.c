#include <stdio.h>

int fact(int n);

int main() {
	printf("���� 1�� �Է� : ");
	int n;
	scanf_s("%d", &n);
	int num = fact(n);
	if (num == -1) {
		printf("�Է��� �߸� �Ǿ� ����ġ ���� ����� ������ϴ�.");
	}
	else {
		printf("%d! = %d", n, num);
	}
}

int fact(int n) {
	int i = 0, sum = 1;
	if (n <= 0) {
		return -1;
	}
	else {
		for (i=n; i > 0; i--) {
			sum *= i;
		}
		return sum;
	}
}