/*
��¥ : 2016. 9. 25.
���� : �ܹ��� ���� ���
���� : ������ ����� �迭
�ۼ��� : 201632023 ������
*/

// �ش����� ����
#include<stdio.h>

// main �Լ� ����
void main()
{
	int a; // ������ �����ޱ� ���� ���� ����
	double cheese[4] = { 3.5, 4, 4.5, 5 }; // cheese[] �迭 ���� 
	double chicken[4] = { 4, 4.5, 5, 5.5 }; // chicken[] �迭 ����
	double special[4] = { 4.2, 4.7, 5.2, 5.7 }; // special[] �迭 ����
	double *ps = cheese; //cheese�迭�� ����Ű�� ������ ���� ps ����

	printf("������ �Է��ϼ���.(�ѱ�:0 �̱�:1 �Ϻ�2: ����: 3)\n"); // ����� ���� �ȳ���
	scanf("%d", &a); // ���� ���� �ޱ�

	// ���ǹ��� ����ؼ� ���������� ���Ű��� ���
	// a�� 0��  ���
	if (a == 0)
	{
		printf("�ѱ������� �ܹ��� ����\n"); // �ѱ������� ���� ����
		printf("ġ����� : %.1f\n", ps[0]); // ������ �迭�� �̿��� ���
		printf("ġŲ���� : %.1f\n", chicken[0]); // �迭�� �̿��� ġŲ������ ���� ���
		printf("����ȹ��� : %.1f\n", special[0]); // �迭�� �̿��� ����ȹ����� ���� ���
	}

	// a�� 1�� ���
	else if (a == 1)
	{
		printf("�̱������� �ܹ��� ����\n"); // �̱������� ���� ����
		printf("ġ����� : %.1f\n", ps[1]); // ������ �迭�� �̿��� ���
		printf("ġŲ���� : %.1f\n", chicken[1]); // �迭�� �̿��� ġŲ������ ���� ���
		printf("����ȹ��� : %.1f\n", special[1]); // �迭�� �̿��� ����ȹ����� ���� ���
	}

	// a�� 2�� ���
	else if (a == 2)
	{
		printf("�Ϻ������� �ܹ��� ����\n"); // �Ϻ������� ���� ����
		printf("ġ����� : %.1f\n", ps[2]); // ������ �迭�� �̿��� ���
		printf("ġŲ���� : %.1f\n", chicken[2]); // �迭�� �̿��� ġŲ������ ���� ���
		printf("����ȹ��� : %.1f\n", special[2]); // �迭�� �̿��� ����ȹ����� ���� ���
	}

	// a�� 3�� ���
	else if (a == 3)
	{
		printf("���Ͽ����� �ܹ��� ����\n"); // ���Ͽ����� ���� ����
		printf("ġ����� : %.1f\n", ps[3]); // ������ �迭�� �̿��� ���
		printf("ġŲ���� : %.1f\n", chicken[3]); // �迭�� �̿��� ġŲ������ ���� ���
		printf("����ȹ��� : %.1f\n", special[3]); // �迭�� �̿��� ����ȹ����� ���� ���
	}

	// 0���� 3������ ���� �Է����� �ʾ����ÿ�
	else
		printf("0���� 3������ ���� �Է��ϼž� �մϴ�.\n"); // �˸��� �ȳ����� �Բ� ���α׷� ����
}