/*
날짜 : 2016. 10. 09
개념 : 함수와 배열, 포인터
문제 : 배열의 최고값과 그 주소값, 인덱스값 출력
작성자 : 201632023 이지훈
*/

//필요한 헤더파일 포함
#include <stdio.h>

double * max(double d[10]); // double형 포인터 함수 max 선언

// main함수 정의
int main(void)
{	
	double arr[10] = { 1.8, 2.4, 7.3, 12.5, 6.5, 27.5, 3.5, 9.3, 16.1, 11.7 }; // double형 배열 정의
	int i; // 반복을 위한 정수 선언
	double *ps = arr; // double형 포인터 변수 선언 및 초기화
	double index; // 인덱스 값을 저장하기위한 double형 변수 선언
	printf("\n처음 입력한 배열의 수 나열 : "); // 배열의 초기값 출력하기

	// for 반복문 사용
	for (i = 0; i < 10; i++)
		printf("%.1f  ", arr[i]);
	
	index = &*max(arr) - &arr; // 인덱스 값 저장
	printf("\n\n배열의 최고값의 주소값 : %p\n", &*max(arr)); // 배열의 최고값의 주소값 출력
	printf("\n배열의 인덱스 값 : %p\n", &index); // 배열의 인덱스값 출력
	printf("\n배열의 최고값 : %.1f\n\n", *max(arr)); // 배열의 최고값 출력
}


double * max(double d[10]) // double형 함수 정의
{
	int i; // 반복을 위한 정수 선언
	double max = d[0]; // 최고값을 저장하기 위한 double형 변수

	// for 반복문 사용
	for (i = 0; i<10; i++) 
	{
		if (max < d[i]) // 조건문을 이용한 최고값 저장
		{
			max = d[i];
		}
	}
	return &max; // 최고값 반환
}