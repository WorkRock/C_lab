/*
// 필요한 헤더파일 포함
#include <stdio.h>
// swap 함수 원형 선언
void swap_d(double a, double b);
void swap_dp(double *pa, double *pb);
void swap_dp_itself(double *pd1, double *);
void swap_dpp(double **ppd1, double **ppd2);

int main()
{
	double a = 20.4, b = 30.9;// double 타입 변수 두 개 정의, 초기화
	double * pa = &a, *pb = &b;// double 포인터 타입 변수 두 개 정의, 초기화

	printf("swap 함수 출력 전 초기 값 \n");
	printf("a = %.2f, b = %.2f \n", a, b);// 두 double 변수 출력
	printf("pa : %p, pb : %p \n", a, b);
	
	swap_d(a, b);
	printf("swap_d 함수 출력 후 초기 값 \n");
	printf("a = %.2f, b = %.2f \n", a, b);// swap_d를 호출한 후 변수 출력
	printf("pa : %p, pb : %p \n", pa, pb);
	
	swap_dp(pa, pb);
	a = 20.4;
	b = 30.9;
	pa = &a;
	pb = &b;
	
	swap_dpp(&pa, &pb);
	printf("swap_dp 함수 출력 후 초기 값 \n");
	printf("a = %.2f, b = %.2f \n", a, b);
	printf("pa : %p, pb : %p \n", pa, pb);
	return 0;
}

void swap_d(double d1, double d2)
{
	double temp;// 임시 변수 정의

	temp = d1;// d1을 temp에 저장
	d1 = d2;// d1에 d2를 저장
	d2 = temp;// d2에 temp을 저장
}

void swap_dp(double *pd1, double *pd2)
{
	double temp;// 임시 변수 정의

	temp = *pd1;// d1을 temp에 저장
	*pd1 = *pd2;// d1에 d2를 저장
	*pd2 = temp;// d2에 tempdp 저장
}

void swap_dp_itself(double *pd1, double *pd2)
{
	//포인터 자체를 swap
	double *ptemp;
	ptemp = pd1;
	pd1 = pd2;
	pd2 = pd1;
}

void swap_dpp(double **ppd1, double **ppd2)
{
	double * pptemp;//포인터 임시 변수 정의

	pptemp = ppd1;
	ppd1 = ppd2;
	ppd2 = pptemp;
}
*/
/*
날짜 : 2016. 11. 07.
내용: 공백을 포함한 문자열을 입력받아서,
	단어별로 다른 줄에 출력하기
개념 : 문자열 함수
작성자 : 201632023 이지훈
파일이름 : string.c
*/
// 헤더파일 포함
#include<stdio.h>
// main함수 정의
int main(void)
{
	char input[20];// 입력 받을 배열 정의
	int i = 0; // 반복을 위한 변수 정의

	// 공백 포함 문자 입력 받기
	fgets(input, sizeof(input), stdin);
	// 문장이 끝날때 까지 한 문자씩 반복
	while (input[i] != '\0')
	{
		if (input[i] != ' ')// 공백이 아닌 경우 해당 문자 출력
			fputchar(input[i], stdout);
		else // 공백인 경우 다음 줄로
			fputc('\n', stdout);// 이동하는 문자 출력

		i++; // 다음 문자로 이동
	}
	return 0;
}