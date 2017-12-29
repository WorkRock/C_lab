/*
날짜 : 2016. 11. 27.
문제 : 이름 학번 국어 영어 수학 평균 성적 출력
개념 : typedef와 구조체 struct와 define과 이것저것 많은 개념
작성자 : 201632023 이지훈
파일 이름 : score.c
*/

// 헤더파일 정의
#include <stdio.h>
#include <string.h>

#define Num 3 // #define을 이용해 요소가 바뀌어도 ok

typedef struct score {
	int studentnumber;
	char name[30];
	int Korean;
	int English;
	int Math;
}Score; // 학번 이름 국어 영어 수학성적을 저장할 typedef struct함수 score 정의

typedef struct average {
	double KorAvg;
	double EngAvg;
	double MathAvg;
}Average; // 3개의 평균값을 저장할 typedef struct average 정의

void inputScore(Score *scores)
{
	printf("\n학번 입력: ");
	scanf("%d", &scores->studentnumber);
	printf("\n학생 이름 입력: ");
	scanf("%s", &scores->name);
	printf("\n국어점수 입력: ");
	scanf("%d", &scores->Korean);
	printf("영어점수 입력: ");
	scanf("%d", &scores->English);
	printf("수학점수 입력: ");
	scanf("%d", &scores->Math);
} // 학번과 이름, 각각의 점수들을 입력받을 함수 inputScores정의

void outputScore(Score *ptr)
{
	printf("\n학번 : %d\n", ptr->studentnumber);
	printf("\n이름 : %s\n", ptr->name);
	printf("\n국어 점수 : %d\n", ptr->Korean);
	printf("\n영어 점수 : %d\n", ptr->English);
	printf("\n수학 점수 : %d\n\n", ptr->Math);
} // 학번과 이름, 각각의 점수들을 배출할 함수 outputScores정의

Average averageScore(Score *ptr)
{
	Average avg = { 0,0 };
	int i;
	for (i = 0; i < Num; i++)
	{
		avg.EngAvg = avg.EngAvg + ptr[i].English;
		avg.MathAvg = avg.MathAvg + ptr[i].Math;
		avg.KorAvg = avg.KorAvg + ptr[i].Korean;
	}
	avg.EngAvg = avg.EngAvg / Num;
	avg.MathAvg = avg.MathAvg / Num;
	avg.KorAvg = avg.KorAvg / Num;
	return avg;
} // 평균값을 계산할 averageScore 함수 정의

// main함수 정의
int main()
{
	int i; // 반복을 위한 변수
	Average total; // 3개의 평균값을 저장할 변수
	Score arr[Num]; // 학번 이름 국어 영어 수학 성적을 저장하는 배열 정의

	// for 반복문 사용
	for (i = 0; i < Num; i++) 
	{
		inputScore(&arr[i]); // 함수 inputscore를 사용해서 사용자에게 입력받기
		outputScore(&arr[i]); // 출력
	}
	
	total = averageScore(arr); // 평균값 계산
	
	printf("\n전체 국어평균 : %.2f\n", total.KorAvg); // 국어 평균 출력

	printf("\n전체 영어평균 : %.2f\n", total.EngAvg); // 영어 평균 출력
	
	printf("\n전체 수학평균 : %.2f\n\n", total.MathAvg); // 수학 평균 출력
	
	return 0;
}



