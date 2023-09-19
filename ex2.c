#include <stdio.h>
void str_conCat(char* str1, char* str2) {
	int num = 0;
	while (*str1) {
		str1++;
	}
	while (*str2) {
		*str1++ = *str2++;
	}
}
int main() {
	char str1[100] = "sunrin";
	char str2[100] = "internet";
	str_conCat(str1, str2);
	printf("%s\n", str1);
}
