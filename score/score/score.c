/*
��¥ : 2016. 11. 27.
���� : �̸� �й� ���� ���� ���� ��� ���� ���
���� : typedef�� ����ü struct�� define�� �̰����� ���� ����
�ۼ��� : 201632023 ������
���� �̸� : score.c
*/

// ������� ����
#include <stdio.h>
#include <string.h>

#define Num 3 // #define�� �̿��� ��Ұ� �ٲ� ok

typedef struct score {
	int studentnumber;
	char name[30];
	int Korean;
	int English;
	int Math;
}Score; // �й� �̸� ���� ���� ���м����� ������ typedef struct�Լ� score ����

typedef struct average {
	double KorAvg;
	double EngAvg;
	double MathAvg;
}Average; // 3���� ��հ��� ������ typedef struct average ����

void inputScore(Score *scores)
{
	printf("\n�й� �Է�: ");
	scanf("%d", &scores->studentnumber);
	printf("\n�л� �̸� �Է�: ");
	scanf("%s", &scores->name);
	printf("\n�������� �Է�: ");
	scanf("%d", &scores->Korean);
	printf("�������� �Է�: ");
	scanf("%d", &scores->English);
	printf("�������� �Է�: ");
	scanf("%d", &scores->Math);
} // �й��� �̸�, ������ �������� �Է¹��� �Լ� inputScores����

void outputScore(Score *ptr)
{
	printf("\n�й� : %d\n", ptr->studentnumber);
	printf("\n�̸� : %s\n", ptr->name);
	printf("\n���� ���� : %d\n", ptr->Korean);
	printf("\n���� ���� : %d\n", ptr->English);
	printf("\n���� ���� : %d\n\n", ptr->Math);
} // �й��� �̸�, ������ �������� ������ �Լ� outputScores����

Average averageScore(Score *ptr)
{
	Average avg = { 0,0 };
	int i;
	for (i = 0; i < Num; i++)
	{
		avg.EngAvg = avg.EngAvg + ptr[i].English;
		avg.MathAvg = avg.MathAvg + ptr[i].Math;
		avg.KorAvg = avg.KorAvg + ptr[i].Korean;
	}
	avg.EngAvg = avg.EngAvg / Num;
	avg.MathAvg = avg.MathAvg / Num;
	avg.KorAvg = avg.KorAvg / Num;
	return avg;
} // ��հ��� ����� averageScore �Լ� ����

// main�Լ� ����
int main()
{
	int i; // �ݺ��� ���� ����
	Average total; // 3���� ��հ��� ������ ����
	Score arr[Num]; // �й� �̸� ���� ���� ���� ������ �����ϴ� �迭 ����

	// for �ݺ��� ���
	for (i = 0; i < Num; i++) 
	{
		inputScore(&arr[i]); // �Լ� inputscore�� ����ؼ� ����ڿ��� �Է¹ޱ�
		outputScore(&arr[i]); // ���
	}
	
	total = averageScore(arr); // ��հ� ���
	
	printf("\n��ü ������� : %.2f\n", total.KorAvg); // ���� ��� ���

	printf("\n��ü ������� : %.2f\n", total.EngAvg); // ���� ��� ���
	
	printf("\n��ü ������� : %.2f\n\n", total.MathAvg); // ���� ��� ���
	
	return 0;
}



