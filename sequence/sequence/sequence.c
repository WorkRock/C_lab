/*
날짜 : 2016. 9. 20
내용 : 수 출력과 평균 계산
개념 : 함수
파일이름 : sequence.c
작성자 : 201632023 이지훈
*/

//필요한 해더파일 포함
#include<stdio.h>

printNumber(int p); // printNumbers() 함수 원형 정의

double average(double p); //average() 함수 원형 정의

void main()
{
	int a; //입력 받을 정수형 변수 정의
	printf("정수 입력 : "); //입력 안내문
	scanf("%d", &a); //정수 입력 받기

	printf("\n입력한 값은 %d입니다.\n\n", a); //입력한 정수 확인
	printNumber(a); //printNumbers() 함수 호출

					//보기 좋은 출력을 위한 안내문과 함께 평균 출력
	printf("연속된 값의 평균은 %.2f입니다.\n\n", average(a)); //average() 함수 호출
}

printNumber(int p) // printNumbers() 함수 정의, 입력 받은 정수를 매개 변수로 받는다.
{
	int i = 0; // 반복문을 끝낼 조건값을 저장하는 변수 정의 및 값 저장
	printf("5개의 연속된 값은"); // 보기 좋은 출력을 위한 안내문 출력
	
	//반복문 정의
	for (i = 0; i<5; i++)
	{
		printf(" %d,", p); // 연속된 정수 출력
		p = p + 1;
	} 
	printf("입니다.\n\n"); // 보기 좋은 출력을 위한 안내문 출력
}

double average(double p) //average() 함수 정의, 입력 받은 정수를 매개 변수로 받는다.
{
	int i = 0; //합을 구할 변수를 0으로 초기화
	double s = 0; //평균을 구할 double형 변수 정의
	
	//반복문을 이용하여 합을 계산
	for (i = 0; i<5;)
	{
		s += p + i; 
		i++;
	}
	s = s / 5; //평균을 계산
	return s; //평균을 반환

}