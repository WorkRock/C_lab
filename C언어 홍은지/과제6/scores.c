/*
�ۼ��� : 2016. 10. 15
���� : ���� ��� �� ��� ���
���� : �Լ�, �������迭, �ݺ���
�ۼ��� : 201632023 ������
*/

// ������� ����
#include<stdio.h>

void showScores(double d[5][3]); // �� �л����� ������ ����� �Լ� ����
void showAverageForStudent(double d[5][3]); // �� �л����� ����� ����� �Լ� ����

// main�Լ� ����
void main()
{
	double arr[5][3] = { {30,40,50},{25,35,45},{60,70,80},{70,80,90},{75,85,95} }; // �л����� ������ �ʱ�ȭ
	double aver = 0; // �� ���� ����� ������ �� ����
	int i, j; // �ݺ��� ���� ���� ����

	showScores(arr); // �Լ��� ȣ���Ͽ� �л����� ���� ����
	showAverageForStudent(arr); // �Լ��� ȣ���Ͽ� �л����� ��� ����
	
	// for�ݺ����� ����Ͽ� �� ���� ��� ���
	for (j = 0; j < 3; j++)
	{
		// ���� for�� ���
		for (i = 0; i < 5; i++)
		{
			aver += arr[i][j];
		}
		printf("\n%d��° ������ ������� : %.1f\n", j + 1, aver/5);
		aver = 0;
	}
	printf("\n");
}

void showScores(double d[5][3]) // showScores�Լ� ����
{
	int i, j; // �ݺ��� ���� ����

	// for �ݺ��� ���
	for (i = 0; i < 5; i++)
	{
		printf("\n%d�� �л��� ���� :",i + 1); // �˸��� �ȳ����� �Բ� ��� �ȳ�
		// ���� for�� ���
		for (j = 0; j < 3; j++)
		{
			printf(" %.1f ", d[i][j]);
		}
		printf("\n");
	}
}

void showAverageForStudent(double d[5][3]) // showAverageForStudent�Լ� ����
{
	int i, j; // �ݺ��� ���� ����
	double aver=0; // ��հ� ����� ���� ���� ���� �� �ʱ�ȭ

	// for �ݺ��� ���
	for (i = 0; i < 5; i++)
	{
		// ���� for �ݺ��� ���
		for (j = 0; j < 3; j++)
		{
			aver += d[i][j];
		}
		printf("\n%d�� �л��� ���� ��� : %.1f\n", i + 1, aver/3); // �˸��� �ȳ����� �Բ� ���
		aver = 0;
	}
}
