/**********************************************
(1)   �й�, �̸�, ��������, ��������, ���������� ������ struct score�� �����Ѵ�. struct ���̵� ������ ������ �� �ְ� typedef�� �̿��Ͽ� ����� ���� Ÿ���� Score�� �����Ѵ�.
(2)   3���� score�� ������ �� �ִ� �迭 scores�� �����Ѵ�.
(3)   ������ ���̼��� ���Ͽ� 3���� ��Ҹ� �������� ������ �ܼ�ȭ������, 20�� �Ǵ� 100���� ���� ������ �� �ֵ��� ���α׷��� �ۼ��϶�. (��Ʈ: #define ���) ��ü ���α׷��� ���� ����� �� �־�� �Ѵ�.
(4)   ��ü �л��� �� ���� ����� �����ϴ� total�̶�� Score Ÿ�� ������ �����Ѵ�.
(5)   scores�� �Ű������� �޾Ƽ� ��������, ��������, ������������ �Է� �޴� inputScores �Լ��� �����Ѵ�.
(6)   score�� �����͸� �Ű������� �޾Ƽ� ��������, ��������, ���������� ����ϴ� outputScore �Լ��� �����Ѵ�.
(7)   �� ����� ����ϴ� averageScore�� �����Ѵ�. �������, �������, ��������� ���Ǿ� ����Ǿ�� �Ѵ�. ������ �Ű������� �����϶�.
��, main �Լ����� ���ǵ� total�̶�� ������ �� ��հ��� �ݵ�� ����Ǿ�� �Ѵ�.
(8)   main()������
��   inputScores�� ȣ���Ͽ� �Է� ����
��   3���� ��ҿ� ���� ���� outputScore�� ȣ���Ͽ� ���
��   averageScore �Լ��� �̿��Ͽ� ����� ����
��   total ���� �̿��Ͽ� �� ���� ��� ���
(9)   ����� �Ҽ��� ��° �ڸ����� ����Ѵ�.

���α׷��� : score.c
�ۼ��� : �ְ���
�ۼ��� : 2016. 11.27
**********************************************/

#include <stdio.h>
#define IDX 3

typedef struct
{
	int number;
	char name[10];
	float kor; // ��������
	float eng;//��������
	float math;//��������
} Score;

void inputScores(Score *scores); // inputScore, outputScore , AvergeScore �Լ� ����
void outputScores(Score *score);
void AverageScore(Score *total, Score *pointer);

int main()
{
	Score arr[IDX]; //3���� score�� ������ �� �ִ� �迭 scores�� ����
	Score total; //total�̶�� Score Ÿ�� ���� ����
	int i;//�ݺ����� ���� ����

	for (i = 0; i < IDX; i++)
	{
		inputScores(&arr[i]); // �Լ� ȣ��
		outputScores(&arr[i]);
	}
	AverageScore(&total, arr);

	printf("�������:%.2f\n", total.eng); // ������
	printf("�������:%.2f\n", total.math);
	printf("�������:%.2f\n", total.kor);
	return 0;
}

void inputScores(Score *scores) // ����ڷκ��� ����, ����, �������� �Է¹���
{
	printf("�������� �Է�: ");
	scanf("%f", &scores->kor);
	printf("�������� �Է�: ");
	scanf("%f", &scores->eng);
	printf("�������� �Է�: ");
	scanf("%f", &scores->math);
}

void outputScores(Score *score) // outScore�Լ��� ���� �Է¹��� �� ���
{
	printf("����: %.2f��\n", score->eng);
	printf("����: %.2f��\n", score->math);
	printf("����: %.2f��\n", score->kor);
}

void AverageScore(Score *total, Score *pointer) // ��ü ��� ���
{
	int i;
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;

	for (i = 0; i<IDX; i++)
	{
		sum1 += pointer[i].eng;
		sum2 += pointer[i].math;
		sum3 += pointer[i].kor;
	}
	total->eng = sum1 / IDX;
	total->math = sum2 / IDX;
	total->kor = sum3 / IDX;
}