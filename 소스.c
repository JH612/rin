/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp; //���� ������ ����
	char str[100]; //�ֿܼ��� ���ڿ��� �Է¹ޱ� ���� ����
	fp = fopen("test.txt", "w");//fopen(���ϸ�,���), FILE* fp = fopen("test.txt", "w");�ε� ����
	//fopen_s �Լ��� ���� ����(r=�б���� ���� ����, w=������� ���� ����(������ �����ϸ� ���� ���� ������), a=�߰������ ������ ������ ������ ���� �߰�, r+=�����ϴ� ���� �б�� ������� ���� ����,w+���)
	if (fp == NULL) {
			printf("���� ���� ����\n");
	}
	else {
		printf("���� ���� ����\n");
	}

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	fputs(str, fp);

	fclose(fp);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp; //���� ������ ����
	char str[100]; //�ֿܼ��� ���ڿ��� �Է¹ޱ� ���� ����
	fp = fopen("test.txt", "r+");//fopen(���ϸ�,���), FILE* fp = fopen("test.txt", "w");�ε� ����
	//fopen_s �Լ��� ���� ����(r=�б���� ���� ����, w=������� ���� ����(������ �����ϸ� ���� ���� ������), a=�߰������ ������ ������ ������ ���� �߰�, r+=�����ϴ� ���� �б�� ������� ���� ����,w+���)
	if (fp == NULL) {
		printf("���� ���� ����\n");
	}
	else {
		printf("���� ���� ����\n");
	}
	
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 0, n = 0;
	FILE* fp; //���� ������ ����
	char str[100]; //�ֿܼ��� ���ڿ��� �Է¹ޱ� ���� ����
	fp = fopen("test.txt", "w");//fopen(���ϸ�,���), FILE* fp = fopen("test.txt", "w");�ε� ����
	//fopen_s �Լ��� ���� ����(r=�б���� ���� ����, w=������� ���� ����(������ �����ϸ� ���� ���� ������), a=�߰������ ������ ������ ������ ���� �߰�, r+=�����ϴ� ���� �б�� ������� ���� ����,w+���)
	if (fp == NULL) {
		printf("���� ���� ����\n");
	}
	else {
		printf("���� ���� ����\n");
	}
	for (int i = 0; i < 5; i++) {
		printf("���� %d : ", i+1);
		scanf("%d", &n);
		sum += n;
	}
	fprintf(fp, "%s %d", "�հ� = ", sum);

	fclose(fp);
}