/**********************************************
(1)   학번, 이름, 국어점수, 영어점수, 수학점수를 가지는 struct score를 정의한다. struct 없이도 변수를 정의할 수 있게 typedef를 이용하여 사용자 정의 타입을 Score를 정의한다.
(2)   3개의 score를 저장할 수 있는 배열 scores를 정의한다.
(3)   과제의 용이성을 위하여 3개의 요소만 가지도록 문제를 단순화했지만, 20개 또는 100개로 쉽게 변경할 수 있도록 프로그램을 작성하라. (힌트: #define 사용) 전체 프로그램이 쉽게 변경될 수 있어야 한다.
(4)   전체 학생의 각 과목 평균을 저장하는 total이라는 Score 타입 변수를 정의한다.
(5)   scores를 매개변수로 받아서 국어점수, 영어점수, 수학점수들을 입력 받는 inputScores 함수를 정의한다.
(6)   score의 포인터를 매개변수로 받아서 국어점수, 영어점수, 수학점수를 출력하는 outputScore 함수를 정의한다.
(7)   각 평균을 계산하는 averageScore를 정의한다. 국어평균, 영어평균, 수학평균이 계산되어 저장되어야 한다. 적당한 매개변수를 정의하라.
단, main 함수에서 정의된 total이라는 변수에 각 평균값이 반드시 저장되어야 한다.
(8)   main()에서는
①   inputScores를 호출하여 입력 받음
②   3개의 요소에 대해 각각 outputScore를 호출하여 출력
③   averageScore 함수를 이용하여 평균을 구함
④   total 값을 이용하여 각 과목 평균 출력
(9)   평균은 소수점 둘째 자리까지 출력한다.

프로그램명 : score.c
작성자 : 최강식
작성일 : 2016. 11.27
**********************************************/

#include <stdio.h>
#define IDX 3

typedef struct
{
	int number;
	char name[10];
	float kor; // 국어점수
	float eng;//영어점수
	float math;//수학점수
} Score;

void inputScores(Score *scores); // inputScore, outputScore , AvergeScore 함수 정의
void outputScores(Score *score);
void AverageScore(Score *total, Score *pointer);

int main()
{
	Score arr[IDX]; //3개의 score를 저장할 수 있는 배열 scores를 정의
	Score total; //total이라는 Score 타입 변수 정의
	int i;//반복문을 위한 변수

	for (i = 0; i < IDX; i++)
	{
		inputScores(&arr[i]); // 함수 호출
		outputScores(&arr[i]);
	}
	AverageScore(&total, arr);

	printf("영어평균:%.2f\n", total.eng); // 평균출력
	printf("수학평균:%.2f\n", total.math);
	printf("국어평균:%.2f\n", total.kor);
	return 0;
}

void inputScores(Score *scores) // 사용자로부터 국어, 수학, 영어점수 입력받음
{
	printf("국어점수 입력: ");
	scanf("%f", &scores->kor);
	printf("영어점수 입력: ");
	scanf("%f", &scores->eng);
	printf("수학점수 입력: ");
	scanf("%f", &scores->math);
}

void outputScores(Score *score) // outScore함수를 통해 입력받은 값 출력
{
	printf("영어: %.2f점\n", score->eng);
	printf("수학: %.2f점\n", score->math);
	printf("국어: %.2f점\n", score->kor);
}

void AverageScore(Score *total, Score *pointer) // 전체 평균 계산
{
	int i;
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;

	for (i = 0; i<IDX; i++)
	{
		sum1 += pointer[i].eng;
		sum2 += pointer[i].math;
		sum3 += pointer[i].kor;
	}
	total->eng = sum1 / IDX;
	total->math = sum2 / IDX;
	total->kor = sum3 / IDX;
}