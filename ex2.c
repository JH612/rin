#include <stdio.h>

int fact(int n);

int main() {
	printf("정수 1개 입력 : ");
	int result = 0;
	int n;
	scanf_s("%d", &n);
	int num = fact(n, &result);
	if (result == -1) {
		printf("입력이 잘못 되어 예상치 못한 결과를 얻었습니다.");
	}
	else {
		printf("%d! = %d", n, result);
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