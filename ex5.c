#include <stdio.h>
void strToUpper(char* str) {
	while (*str) {
		if (*str >= 'a' && *str <= 'z') {
			*str = *str - 32;
		}
		str++;
	}
}
int main() {
	char str[100];
	printf("문자열 입력 : ");
	scanf_s("%s", str, 100);
	printf("대문자 : ");
	strToUpper(str);
	printf("%s", str);
}