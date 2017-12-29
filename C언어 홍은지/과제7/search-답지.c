// 작성자 : TA 김재경

#include <stdio.h>
#include <string.h>

void main() {
	char name[10][30] = { "김영수", "김일수", "김이수", "김삼수", "김사수", "김오수", "김육수", "김칠수", "김팔수", "김구수" };
	int eng[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int math[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	char searchName[30];
	int i;

	printf("검색할 이름을 입력해주세요 : ");
	scanf("%s", searchName);

	for (i = 0; i < 10; ++i) {
		if (!strcmp(name[i], searchName)) {
			printf("이름: %s, 영어: %d, 수학: %d\n", name[i], eng[i], math[i]);
			return;
		}
	}

	printf("해당 학생은 존재하지 않습니다.\n");
}