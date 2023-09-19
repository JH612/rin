#include <stdio.h>

int str_len(char* str);

int main() {
	char str[1000];
	printf("문자열 입력 : ");
	scanf_s("%s", str,1000);
	printf("문자열의 길이 : %d\n", str_len(str));

}

int str_len(char* str) {
	int num = 0;
	while (*str) {
		str++;
		num++;
	}
	return num;
}