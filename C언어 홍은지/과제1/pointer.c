/*
2016년 9월 10일
학번 : 201632023
이름 : 이지훈
주제 : 포인터 변수에 대한 적응
*/
#include<stdio.h>

void main()
{
	int a = 1; //int형 변수'a' 선언 및 초기화
	double b = 2.00; //double형 변수'b' 선언 및 초기화
	char c = 'k';//char형 변수'c' 선언 및 초기화

	int *pa; //int값을 가리키는 포인터 변수
	double *pb; //double값을 가리키는 포인터 변수
	char *pc; //char값을 가리키는 포인터 변수

	printf("변수 초기값\n\na = %d b = %f c = %c\n\n\n", a, b, c); //int, double, char형 변수들의 출력값 확인

	pa = &a; //pa가 a를 가리키도록 지정
	pb = &b; //pb가 b를 가리키도록 지정
	pc = &c; //pc가 c를 가리키도록 지정

	printf("포인터 변수가 저장한 주소 값\n\npa = %d pb = %d pc = %d\n\n\n", pa, pb, pc); //pa, pb, pc의 주소값 확인

	printf("포인터 변수가 가리키는 값\n\n*pa = %d *pb = %f *pc = %c\n\n\n", *pa, *pb, *pc); //pa, pb, pc가 가리키는 값 확인

	*pa = *pa + 3; //pa가 가리키는 값에 3을 더함
	*pb = *pb + 3; //pb가 가리키는 값에 3을 더함
	*pc = *pc + 3; //pc가 가리키는 값에 3을 더함
	
	printf("포인터 변수를 통해 3을 더한 후 변수 값\n\na = %d b = %f c = %c\n\n\n", a, b, c); //포인터 변수가 가리키는 값에 3을 더한 후의 변수값의 변동 확인

	printf("3을 더한 후 포인터 변수가 가리키는 값\n\n*pa = %d *pb = %f *pc = %c\n\n\n", *pa, *pb, *pc); //포인터 변수가 가리키는 값의 변동 확인


}