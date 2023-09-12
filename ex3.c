#include <stdio.h>

int fact(int n);

int main() {
	int result = 0;
	int n;

	while (1)
	{
		printf("���� 1�� �Է� : ");

		scanf_s("%d", &n);

		int num = fact(n, &result);
		if (result == -1) {
			printf("�Է��� �߸� �Ǿ� ����ġ ���� ����� ������ϴ�.\n\n");
		}
		else {
			printf("%d! = %d", n, result);
			break;
		
		}
	}
}

int fact(int n, int* result) {
	int i = 0, sum = 1;

	if (n <= 0) {
		*result = -1;
	}
	else {
		for (i = n; i > 0; i--) {
			sum *= i;
		}

		*result = sum;
	}
}