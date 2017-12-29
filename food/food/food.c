/*
���� : ����ü�� �迭
���� :
meal�̶�� �Ʒ��� ���� ����ü�� �����Ѵ�
ù��° ����� name(��ħ, ����, ���� �� �ϳ�)
�ι�° ����� food(������ �Ծ���? �����̸�)
����° ����� calorie(�� Į�θ� �ΰ�?)
Main �Լ������� meal�� 3�� ������ �� �ִ� �迭�� �����Ͽ� �ʱ�ȭ�Ѵ�
�迭 ������ ����ϰ�, �� Į�θ��� ����Ͽ� ����Ѵ�.
�ۼ��� : 2016. 11. 16
�ۼ��� : ������
*/
/*
#include<stdio.h>
// ����ü ����
struct meal
{
	char name[10];
	char food[20];
	int calorie;
};

int main()
{
	// ����ü �迭 �ʱ�ȭ
	struct meal meals[3] = { { "��ħ", "�佺Ʈ", 400 },{ "����", "������", 700 },{ "����", "��ġ�", 800 } };
	int i;// �ݺ����� ���� ����
	int sum = 0;// ���� �����ϱ� ���� ����
				// struct meal�� ���� ������ ���� ����
	struct meal *pMeal;

	// �迭 ��� �� Į�θ� �� ���
	for (i = 0; i < 3; i++)
	{
		// ������ ������ i��° ��Ҹ� ����Ű���� ����
		pMeal = &meals[i];
		printf("\n%s: %s %dcal; \n", meals[i].name, meals[i].food, meals[i].calorie);
		// sum += meals[i].calorie; - �����͸� ������� ������
		// �����͸� �̿��Ͽ� sum���
		sum += pMeal->calorie;
	}
	// Į�θ� �� ���
	printf("\nĮ�θ� �� : %dcal\n\n", sum);
	return 0;
}*/

#include<stdio.h>
typedef int CAL;
// ����ü ����
typedef struct meal
{
	char name[10];
	char food[20];
	CAL calorie;
}Meal;

int main()
{
	// ����ü �迭 �ʱ�ȭ
	Meal meals[3] = { { "��ħ", "�佺Ʈ", 400 },{ "����", "������", 700 },{ "����", "��ġ�", 800 } };
	int i;// �ݺ����� ���� ����

	CAL sum = 0;// ���� �����ϱ� ���� ����
				// struct meal�� ���� ������ ���� ����
	Meal *pMeal;

	// �迭 ��� �� Į�θ� �� ���
	for (i = 0; i < 3; i++)
	{
		// ������ ������ i��° ��Ҹ� ����Ű���� ����
		pMeal = &meals[i];
		printf("\n%s: %s %dcal; \n", meals[i].name, meals[i].food, meals[i].calorie);
		// sum += meals[i].calorie; - �����͸� ������� ������
		// �����͸� �̿��Ͽ� sum���
		sum += pMeal->calorie;
	}
	// Į�θ� �� ���
	printf("\nĮ�θ� �� : %dcal\n\n", sum);
	return 0;
}
