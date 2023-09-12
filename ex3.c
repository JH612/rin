#include <stdio.h>

int fact(int n);

int main() {
	int result = 0;
	int n;

	while (1)
	{
		printf("정수 1개 입력 : ");

		scanf_s("%d", &n);

		int num = fact(n, &result);
		if (result == -1) {
			printf("입력이 잘못 되어 예상치 못한 결과를 얻었습니다.\n\n");
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