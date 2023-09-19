#include <stdio.h>
void putStrDigit(char* str) {
	while (*str) {
		if (*str >= '0' && *str <= '9') {
			printf("%c", *str);
		}
		str++;
		
	}
}
int main() {
	char str[100] = { '\0' };
	printf("문자열 입력 : ");
	scanf_s("%s", str,100);
	putStrDigit(str);
}