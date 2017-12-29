// 작성자: TA 김재경

#include <stdio.h>

// 함수 원형 정의
void printNumber(int num);
double average(int num);

int main(void) {
	int num;

	// 사용자로부터 정수를 입력 받음
	printf("정수 입력: ");
	scanf("%d", &num);

	// 입력받은 정수 출력
	printf("입력한 값은 %d입니다.\n", num);

	// printNumber 함수를 호출하여 연속된 5개의 정수 출력
	printf("5개 연속된 값은 ");
	printNumber(num);
	printf("입니다.\n");

	// average 함수를 호출하여 연속된 5개의 정수의 평균 출력
	printf("연속된 값의 평균은 %.2f입니다.\n", average(num));

	return 0;
}

void printNumber(int num) {
	int i; // 반복문을 위한 변수

	// 연속된 5개의 정수 출력
	for (i = 0; i < 5; ++i)
		printf("%d ", num + i);
}

double average(int num) {
	double total = 0.0; // 연속된 5개의 정수의 합
	int i; // 반복문을 위한 변수

	// 정수의 합계를 구함
	for (i = 0; i < 5; ++i)
		total += num + i;

	// 평균을 반환
	return total / 5;
}

/*
double average(int num) {
	// 평균을 반환
	return (double)(num + 2);
}
*/