#include <stdio.h>
void str_NconCat(char* str1, char* str2, int n) {
	int num = 0;
	while (*str1) {
		str1++;
	}
	while (n) {
		*str1++ = *str2++;
		n--;
	}
	*str1 = '\0';
}
int main() {
	char str1[100] = "sunrin";
	char str2[100] = "internet";
	str_NconCat(str1, str2, 5);
	printf("%s\n", str1);
}
