/*
2016�� 9�� 10��
�й� : 201632023
�̸� : ������
���� : ������ ������ ���� ����
*/
#include<stdio.h>

void main()
{
	int a = 1; //int�� ����'a' ���� �� �ʱ�ȭ
	double b = 2.00; //double�� ����'b' ���� �� �ʱ�ȭ
	char c = 'k';//char�� ����'c' ���� �� �ʱ�ȭ

	int *pa; //int���� ����Ű�� ������ ����
	double *pb; //double���� ����Ű�� ������ ����
	char *pc; //char���� ����Ű�� ������ ����

	printf("���� �ʱⰪ\n\na = %d b = %f c = %c\n\n\n", a, b, c); //int, double, char�� �������� ��°� Ȯ��

	pa = &a; //pa�� a�� ����Ű���� ����
	pb = &b; //pb�� b�� ����Ű���� ����
	pc = &c; //pc�� c�� ����Ű���� ����

	printf("������ ������ ������ �ּ� ��\n\npa = %d pb = %d pc = %d\n\n\n", pa, pb, pc); //pa, pb, pc�� �ּҰ� Ȯ��

	printf("������ ������ ����Ű�� ��\n\n*pa = %d *pb = %f *pc = %c\n\n\n", *pa, *pb, *pc); //pa, pb, pc�� ����Ű�� �� Ȯ��

	*pa = *pa + 3; //pa�� ����Ű�� ���� 3�� ����
	*pb = *pb + 3; //pb�� ����Ű�� ���� 3�� ����
	*pc = *pc + 3; //pc�� ����Ű�� ���� 3�� ����
	
	printf("������ ������ ���� 3�� ���� �� ���� ��\n\na = %d b = %f c = %c\n\n\n", a, b, c); //������ ������ ����Ű�� ���� 3�� ���� ���� �������� ���� Ȯ��

	printf("3�� ���� �� ������ ������ ����Ű�� ��\n\n*pa = %d *pb = %f *pc = %c\n\n\n", *pa, *pb, *pc); //������ ������ ����Ű�� ���� ���� Ȯ��


}