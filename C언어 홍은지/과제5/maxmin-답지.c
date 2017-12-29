// 작성자: TA 김재경

#include <stdio.h>

double* max(double d[]);

int main(void) {
	double arr[] = { 1.3, 4.2, 3.8, 6.5, 3.4, 5.2, 7.7, 5.5, 1.4, 2.9 };
	double* addrOfMax;	// 최대값의 주소를 저장하기 위한 변수
	int length, indexOfMax; // length: 배열 원소의 개수, indexOfMax: 최대값의 인덱스
	int i;

	// 배열 원소 개수를 구한다
	length = sizeof(arr) / sizeof(double);

	// 배열의 초기값을 출력
	printf("배열의 초기값\n");
	for (i = 0; i < length; ++i) {
		printf("%.1f ", arr[i]);
	}

	// 최대값의 주소값을 구한다.
	addrOfMax = max(arr);
	// 최대값의 인덱스를 구한다.
	indexOfMax = addrOfMax - arr;

	// 최대값의 주소, 최대값의 인덱스, 최대값 출력
	printf("\n\n최대값의 주소값: %p\n", addrOfMax);
	printf("최대값의 인덱스: %d\n", indexOfMax);
	printf("최대값: %.1f\n", *addrOfMax);

	return 0;
}

double* max(double d[]) {
	double* addrOfMax = d; // 최대값의 주소를 저장하기 위한 변수
	int i;

	for (i = 1; i < 10; ++i) {
		// d[i]가 현재 최대값보다 크면
		if (d[i] > *addrOfMax) {
			// 최대값 갱신
			addrOfMax = &d[i];
		}
	}

	// 최대값의 주소를 반환
	return addrOfMax;
}