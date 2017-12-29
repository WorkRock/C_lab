// 작성자 : TA 김재경

#include <stdio.h>

int main(void) {
	int seat[4][9] = {
		{ 0, 0, 0, 1, 0, 0, 1, 0, 0 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 1 },
		{ 1, 1, 1, 0, 0, 0, 1, 1, 1 },
		{ 1, 0, 0, 1, 1, 1, 1, 0, 0 }
	};
	int reserve; // 예약을 판별하는 변수
	int width, height; // width:좌석, height:줄
	int i, j; // 반복문을 위한 변수

	while (1) {
		// 현재 예약 상태 출력
		printf("현재 예약 상태는 아래와 같습니다.\n");
		printf("\t1 2 3 4 5 6 7 8 9\n");
		printf("\t=================\n");
		for (i = 0; i < 4; ++i) {
			printf("%d\t", i + 1);
			for (j = 0; j < 9; ++j) {
				printf("%d ", seat[i][j]);
			}
			printf("\n");
		}

		// 예약 입력
		printf("예약을 원하시면 1을 입력하시고, 아니면 0을 입력하세요:(0 또는 1) ");
		scanf("%d", &reserve);

		// 예약을 원하면
		while (reserve == 1) {
			// 줄 입력
			printf("어느 줄을 예약하시겠습니까?(1~4 중 숫자 입력) ");
			scanf("%d", &height);

			// 줄 입력을 제대로 하면
			while (1 <= height && height <= 4) {
				// 좌석 입력
				printf("어느 좌석을 예약하시겠습니까?(1~9 중 숫자 입력) ");
				scanf("%d", &width);

				// 좌석 입력을 제대로 하면
				if (1 <= width && width <= 9) {
					// 이미 예약된 좌석이면
					if (seat[height - 1][width - 1]) {
						printf("이미 예약된 좌석입니다.\n\n");
						break;
					}
					// 예약되지 않은 좌석이면
					else {
						seat[height - 1][width - 1] = 1;
						printf("예약되었습니다.\n\n");
						break;
					}
				}
				// 좌석 입력을 제대로 하지 않으면
				else {
					printf("1~9 숫자를 입력해주세요.\n\n");
				}
			}

			// 줄 입력을 제대로 하지 않으면
			if (height < 1 || height > 4) {
				printf("1~4 숫자를 입력해주세요.\n\n");
			}
			// 예약을 끝냈으면
			else {
				break;
			}
		}

		if (reserve == 0) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		// 예약 입력을 제대로 안하면
		else if (reserve != 1) {
			printf("0 아니면 1을 입력해주세요.\n\n");
		}
	}

	return 0;
}