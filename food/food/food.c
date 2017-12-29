/*
개념 : 구조체의 배열
내용 :
meal이라는 아래와 같은 구조체를 정의한다
첫번째 멤버는 name(아침, 점심, 저녁 중 하나)
두번째 멤버는 food(무엇을 먹었나? 음식이름)
세번째 멤버는 calorie(몇 칼로리 인가?)
Main 함수에서는 meal을 3개 저장할 수 있는 배열을 정의하여 초기화한다
배열 내용을 출력하고, 총 칼로리를 계산하여 출력한다.
작성일 : 2016. 11. 16
작성자 : 이지훈
*/
/*
#include<stdio.h>
// 구조체 정의
struct meal
{
	char name[10];
	char food[20];
	int calorie;
};

int main()
{
	// 구조체 배열 초기화
	struct meal meals[3] = { { "아침", "토스트", 400 },{ "점심", "볶음밥", 700 },{ "저녁", "김치찌개", 800 } };
	int i;// 반복문을 위한 변수
	int sum = 0;// 합을 저장하기 위한 변수
				// struct meal에 대한 포인터 변수 정의
	struct meal *pMeal;

	// 배열 출력 및 칼로리 합 계산
	for (i = 0; i < 3; i++)
	{
		// 포인터 변수가 i번째 요소를 가리키도록 설정
		pMeal = &meals[i];
		printf("\n%s: %s %dcal; \n", meals[i].name, meals[i].food, meals[i].calorie);
		// sum += meals[i].calorie; - 포인터를 사용하지 않을시
		// 포인터를 이용하여 sum계산
		sum += pMeal->calorie;
	}
	// 칼로리 합 출력
	printf("\n칼로리 합 : %dcal\n\n", sum);
	return 0;
}*/

#include<stdio.h>
typedef int CAL;
// 구조체 정의
typedef struct meal
{
	char name[10];
	char food[20];
	CAL calorie;
}Meal;

int main()
{
	// 구조체 배열 초기화
	Meal meals[3] = { { "아침", "토스트", 400 },{ "점심", "볶음밥", 700 },{ "저녁", "김치찌개", 800 } };
	int i;// 반복문을 위한 변수

	CAL sum = 0;// 합을 저장하기 위한 변수
				// struct meal에 대한 포인터 변수 정의
	Meal *pMeal;

	// 배열 출력 및 칼로리 합 계산
	for (i = 0; i < 3; i++)
	{
		// 포인터 변수가 i번째 요소를 가리키도록 설정
		pMeal = &meals[i];
		printf("\n%s: %s %dcal; \n", meals[i].name, meals[i].food, meals[i].calorie);
		// sum += meals[i].calorie; - 포인터를 사용하지 않을시
		// 포인터를 이용하여 sum계산
		sum += pMeal->calorie;
	}
	// 칼로리 합 출력
	printf("\n칼로리 합 : %dcal\n\n", sum);
	return 0;
}
