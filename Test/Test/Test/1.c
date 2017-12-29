/*
2016. 8. 31
내용 : 1학기 복습 문제
중요 개념 : 배열, 반복문
학번 : 201632023
이름 : 이지훈
*/
#include<stdio.h>

void main()
{
int i; //반복문을 위한 변수 i
int j = -1; //사용자 입력을 받기위한 변수 j. 초기화가 필요하다.
char str[] = "Excellent"; //문자열 배열 정의. Excellent로 초기화
char *ps; //char값을 가리키는 포인터 변수

ps = str; //포인터ps가 가리키는 값을 str의 첫번째 요소로 바꾼다

printf("*ps = %c\n", *ps); //포인터ps가 str의 첫번째 요소를 가리키는지 검산해 보았다.

printf("--변경 전 문자열--\n");//변경전 문자열을 출력

//문자를 한줄에 하나씩 출력

//for 반복문 사용
for (i = 0; i < 9; i++)
printf("%c\n", str[i]);

//입력받은 인덱스의 문자 출력

printf("0과 8사이의 정수 입력");

//do while 사용
do {
scanf("%d", &j);
} while (j < 0 || j > 8);

printf("%d\n", j); //입력 받은 인덱스 출력

printf("%c\n", str[j]); //입력 받은 인덱스의 문자 출력
}