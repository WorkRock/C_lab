/*
��¥ : 2016. 12. 23.
���� : typedef, swap
���� : swap�� �̿��ؼ� �� �ٲ㼭 ����ϱ� (������ ���� C���α׷��� - P.484 / 23-1)
���α׷� �̸� : 23.c
�ۼ��� : 201632023 ������
*/

#include<stdio.h> // ������� ����

typedef struct point {
	int xpos;
	int ypos;
}Point; // typedef �� ����ü Point����

Point SwapPoint(Point *p1, Point *p2); // �ΰ��� ���� �ٲپ��� Point�� SwapPoint�Լ� ����

// main�Լ� ����
int main()
{
	Point pos[2] = { { 2,4 },{ 5,7 } }; // �ΰ��� Point ���� �����ϰ� �ʱ�ȭ
	int i; // �ݺ��� ���� ���� ����
	
	// for���� ����Ͽ� pos���
	for (i = 0; i < 2; i++)
	{
		printf("\npos[%d] = %d,%d\n", i+1,pos[i].xpos, pos[i].ypos);
	}
	
	printf("\n!���� ��ġ ��ȯ!\n");
	SwapPoint(&pos[0], &pos[1]); // Swap�Լ��� �̿��ؼ� �ΰ��� �� ����
	
	// �ٽ� for���� ����Ͽ� ���
	for (i = 0; i < 2; i++)
	{
		printf("\npos[%d] = %d,%d\n", i + 1, pos[i].xpos, pos[i].ypos);
	}
	printf("\ntemp�� ����� �� = %d,%d\n\n", SwapPoint(&pos[0], &pos[1])); // temp�� ����� �� ���
	return 0; // ���α׷� ����
}

Point SwapPoint(Point *p1, Point *p2) // Point �� SwapPoint �Լ� �ʱ�ȭ
{
	Point temp = *p1; // p1���� ������ temp����
	*p1 = *p2; // p1�� p2�� ����
	*p2 = temp; // p2�� temp(p1�� ��) ����
	return temp;
}