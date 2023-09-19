#include <stdio.h>

void putReverseStr(char* str) {
	char str2[100] = { '\0' };
	char* p = str2;
	int num = 0;
	while(*str) {
		str++;
		num++;
	}
	//num += 1;
	while (num) {
		/*printf("%c", *str);
		str--;
		num--;*/
		num--;
		*p++ = *str--;
	}
}

int main() {
	char str[100];
	printf("문자열 입력 : ");
	scanf_s("%s", str, 100);
	putReverseStr(str);
}