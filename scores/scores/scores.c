/*
작성일 : 2016. 10. 15
문제 : 성적 출력 및 평균 계산
개념 : 함수, 이차원배열, 반복문
작성자 : 201632023 이지훈
*/

// 헤더파일 포함
#include<stdio.h>

void showScores(double d[5][3]); // 각 학생들의 성적을 출력할 함수 정의
void showAverageForStudent(double d[5][3]); // 각 학생들의 평균을 출력할 함수 정의

// main함수 정의
void main()
{
	double arr[5][3] = { {30,40,50},{25,35,45},{60,70,80},{70,80,90},{75,85,95} }; // 학생들의 성적값 초기화
	double aver = 0; // 각 과목별 평균을 저장할 값 저장
	int i, j; // 반복을 위한 정수 정의

	showScores(arr); // 함수를 호출하여 학생들의 성적 나열
	showAverageForStudent(arr); // 함수를 호출하여 학생들의 평균 나열
	
	// for반복문을 사용하여 각 과목별 평균 출력
	for (j = 0; j < 3; j++)
	{
		// 이중 for문 사용
		for (i = 0; i < 5; i++)
		{
			aver += arr[i][j];
		}
		printf("\n%d번째 과목의 성적평균 : %.1f\n", j + 1, aver/5);
		aver = 0;
	}
	printf("\n");
}

void showScores(double d[5][3]) // showScores함수 정의
{
	int i, j; // 반복을 위한 정수

	// for 반복문 사용
	for (i = 0; i < 5; i++)
	{
		printf("\n%d번 학생의 성적 :",i + 1); // 알맞은 안내문과 함께 출력 안내
		// 이중 for문 사용
		for (j = 0; j < 3; j++)
		{
			printf(" %.1f ", d[i][j]);
		}
		printf("\n");
	}
}

void showAverageForStudent(double d[5][3]) // showAverageForStudent함수 정의
{
	int i, j; // 반복을 위한 정수
	double aver=0; // 평균값 계산을 위한 변수 정의 및 초기화

	// for 반복문 사용
	for (i = 0; i < 5; i++)
	{
		// 이중 for 반복문 사용
		for (j = 0; j < 3; j++)
		{
			aver += d[i][j];
		}
		printf("\n%d번 학생의 성적 평균 : %.1f\n", i + 1, aver/3); // 알맞은 안내문과 함께 출력
		aver = 0;
	}
}
