// 작성자 : TA 김재경

#include <stdio.h>

int main(void) {
	char* names[3] = { "치즈", "치킨", "스페셜" };
	char* locations[4] = { "한국", "미국", "일본", "독일" };
	double prices[][3] = { {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}, {3.1, 3.2, 3.3}, {4.1, 4.2, 4.3} };
	int location;
	int i;

	while (1) {
		printf("지역을 입력하세요(한국:0 미국:1 일본2: 독일: 3): ");
		scanf("%d", &location);

		// 입력한 값이 0~3
		if (0 <= location && location <= 3) {
			printf("%s에서의 햄버거 가격\n", *(locations + location));
			for (int i = 0; i < 3; ++i) {
				printf("%s버거: %.1f달러\n", *(names + i), *(*(prices + location) + i));
			}
			break;
		}
		// 입력한 값이 0~3이외
		else {
			printf("0~3만 입력해주세요\n\n");
		}
	}

	return 0;
}