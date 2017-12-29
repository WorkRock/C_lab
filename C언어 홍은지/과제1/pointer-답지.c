// 작성자 : TA 김재경

#include <stdio.h>

int main(void) {
	int a = 1, *pa;			//int형 변수 a를 선언과 동시에 초기화하고 int형 포인터 pa를 선언
	double b = 2.00, *pb;	//double형 변수 b를 선언과 동시에 초기화하고 int형 포인터 pb를 선언
	char c = 'k', *pc;		//char형 변수 c를 선언과 동시에 초기화하고 int형 포인터 pc를 선언

	// 포인터 변수 초기화
	pa = &a;
	pb = &b;
	pc = &c;

	// a,b,c 변수 초기값 출력
	printf("변수 초기 값\n");
	printf("a=%d b=%.2f c=%c\n\n", a, b, c);

	// pa, pb, pc가 저장한 주소 값 출력
	printf("포인터 변수가 저장한 주소 값\n");
	printf("pa=%d pb=%d pc=%d\n\n", pa, pb, pc);

	// pa, pb, pc가 가리키는 값 출력
	printf("포인터 변수가 가리키는 값\n");
	printf("*pa=%d *pb=%.2f *pc=%c\n\n", *pa, *pb, *pc);

	// 포인터 변수를 통해 3을 더함
	*pa += 3;
	*pb += 3;
	*pc += 3;

	// 더한 값을 a, b, c로 출력
	printf("포인터 변수를 통해 3을 더한 후 변수 값\n");
	printf("a=%d b=%.2f c=%c\n\n", a, b, c);

	// 더한 값을 pa, pb, pc로 출력
	printf("3을 더한 후 포인터 변수가 가리키는 값\n");
	printf("*pa=%d *pb=%.2f *pc=%c\n", *pa, *pb, *pc);

	return 0;
}