// 작성자 : TA 김재경

#include <stdio.h>
#include <string.h>

typedef struct {
	int studentNumber;
	char name[20];
	char department[20];
} Student;

void main() {
	Student students[10] = {
		{ 1, "김영수", "소프트웨어공학과" },
		{ 2, "김일수", "소프트웨어공학과" },
		{ 3, "김이수", "소프트웨어공학과" },
		{ 4, "김삼수", "소프트웨어공학과" },
		{ 5, "김사수", "소프트웨어공학과" },
		{ 6, "김오수", "소프트웨어공학과" },
		{ 7, "김육수", "소프트웨어공학과" },
		{ 8, "김칠수", "소프트웨어공학과" },
		{ 9, "김팔수", "소프트웨어공학과" },
		{ 10, "김구수", "소프트웨어공학과" },
	};
	char searchName[20];
	int i;

	printf("검색할 학생의 이름을 입력하세요 : ");
	scanf("%s", searchName);
	//scanf_s("%s", searchName, sizeof(searchName));

	for (i = 0; i < 10; ++i) {
		if (!strcmp(students[i].name, searchName)) {
			printf("학번: %d, 이름: %s, 학과: %s\n", students[i].studentNumber, students[i].name, students[i].department);
			return;
		}
	}

	printf("해당 학생은 존재하지 않습니다.\n");
}