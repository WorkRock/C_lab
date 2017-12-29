/*
날짜 : 2016. 12. 23.
개념 : typedef, swap
문제 : swap을 이용해서 값 바꿔서 출력하기 (윤성우 열혈 C프로그래밍 - P.484 / 23-1)
프로그램 이름 : 23.c
작성자 : 201632023 이지훈
*/

#include<stdio.h> // 헤더파일 정의

typedef struct point {
	int xpos;
	int ypos;
}Point; // typedef 형 구조체 Point정의

Point SwapPoint(Point *p1, Point *p2); // 두개의 값을 바꾸어줄 Point형 SwapPoint함수 정의

// main함수 정의
int main()
{
	Point pos[2] = { { 2,4 },{ 5,7 } }; // 두개의 Point 값을 정의하고 초기화
	int i; // 반복을 위한 변수 정의
	
	// for문을 사용하여 pos출력
	for (i = 0; i < 2; i++)
	{
		printf("\npos[%d] = %d,%d\n", i+1,pos[i].xpos, pos[i].ypos);
	}
	
	printf("\n!둘의 위치 변환!\n");
	SwapPoint(&pos[0], &pos[1]); // Swap함수를 이용해서 두개의 값 섞기
	
	// 다시 for문을 사용하여 출력
	for (i = 0; i < 2; i++)
	{
		printf("\npos[%d] = %d,%d\n", i + 1, pos[i].xpos, pos[i].ypos);
	}
	printf("\ntemp에 저장된 값 = %d,%d\n\n", SwapPoint(&pos[0], &pos[1])); // temp에 저장된 값 출력
	return 0; // 프로그램 종료
}

Point SwapPoint(Point *p1, Point *p2) // Point 형 SwapPoint 함수 초기화
{
	Point temp = *p1; // p1값을 저장할 temp정의
	*p1 = *p2; // p1에 p2값 저장
	*p2 = temp; // p2에 temp(p1의 값) 저장
	return temp;
}