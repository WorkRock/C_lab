// �ۼ��� : TA �����

#include <stdio.h>

int main(void) {
	int a = 1, *pa;			//int�� ���� a�� ����� ���ÿ� �ʱ�ȭ�ϰ� int�� ������ pa�� ����
	double b = 2.00, *pb;	//double�� ���� b�� ����� ���ÿ� �ʱ�ȭ�ϰ� int�� ������ pb�� ����
	char c = 'k', *pc;		//char�� ���� c�� ����� ���ÿ� �ʱ�ȭ�ϰ� int�� ������ pc�� ����

	// ������ ���� �ʱ�ȭ
	pa = &a;
	pb = &b;
	pc = &c;

	// a,b,c ���� �ʱⰪ ���
	printf("���� �ʱ� ��\n");
	printf("a=%d b=%.2f c=%c\n\n", a, b, c);

	// pa, pb, pc�� ������ �ּ� �� ���
	printf("������ ������ ������ �ּ� ��\n");
	printf("pa=%d pb=%d pc=%d\n\n", pa, pb, pc);

	// pa, pb, pc�� ����Ű�� �� ���
	printf("������ ������ ����Ű�� ��\n");
	printf("*pa=%d *pb=%.2f *pc=%c\n\n", *pa, *pb, *pc);

	// ������ ������ ���� 3�� ����
	*pa += 3;
	*pb += 3;
	*pc += 3;

	// ���� ���� a, b, c�� ���
	printf("������ ������ ���� 3�� ���� �� ���� ��\n");
	printf("a=%d b=%.2f c=%c\n\n", a, b, c);

	// ���� ���� pa, pb, pc�� ���
	printf("3�� ���� �� ������ ������ ����Ű�� ��\n");
	printf("*pa=%d *pb=%.2f *pc=%c\n", *pa, *pb, *pc);

	return 0;
}