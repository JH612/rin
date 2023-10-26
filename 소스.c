/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp; //파일 포인터 선언
	char str[100]; //콘솔에서 문자열을 입력받기 위한 변수
	fp = fopen("test.txt", "w");//fopen(파일명,모드), FILE* fp = fopen("test.txt", "w");로도 가능
	//fopen_s 함수로 파일 열기(r=읽기모드로 파일 열기, w=쓰기모드로 파일 생성(파일이 존재하면 기존 내용 지워짐), a=추가보드로 파일이 있으면 데이터 끝에 추가, r+=존재하는 파일 읽기와 쓰기모드로 파일 열기,w+등등)
	if (fp == NULL) {
			printf("파일 열기 실패\n");
	}
	else {
		printf("파일 열기 성공\n");
	}

	printf("문자열 입력 : ");
	scanf("%s", str);
	fputs(str, fp);

	fclose(fp);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp; //파일 포인터 선언
	char str[100]; //콘솔에서 문자열을 입력받기 위한 변수
	fp = fopen("test.txt", "r+");//fopen(파일명,모드), FILE* fp = fopen("test.txt", "w");로도 가능
	//fopen_s 함수로 파일 열기(r=읽기모드로 파일 열기, w=쓰기모드로 파일 생성(파일이 존재하면 기존 내용 지워짐), a=추가보드로 파일이 있으면 데이터 끝에 추가, r+=존재하는 파일 읽기와 쓰기모드로 파일 열기,w+등등)
	if (fp == NULL) {
		printf("파일 열기 실패\n");
	}
	else {
		printf("파일 열기 성공\n");
	}
	
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 0, n = 0;
	FILE* fp; //파일 포인터 선언
	char str[100]; //콘솔에서 문자열을 입력받기 위한 변수
	fp = fopen("test.txt", "w");//fopen(파일명,모드), FILE* fp = fopen("test.txt", "w");로도 가능
	//fopen_s 함수로 파일 열기(r=읽기모드로 파일 열기, w=쓰기모드로 파일 생성(파일이 존재하면 기존 내용 지워짐), a=추가보드로 파일이 있으면 데이터 끝에 추가, r+=존재하는 파일 읽기와 쓰기모드로 파일 열기,w+등등)
	if (fp == NULL) {
		printf("파일 열기 실패\n");
	}
	else {
		printf("파일 열기 성공\n");
	}
	for (int i = 0; i < 5; i++) {
		printf("숫자 %d : ", i+1);
		scanf("%d", &n);
		sum += n;
	}
	fprintf(fp, "%s %d", "합계 = ", sum);

	fclose(fp);
}