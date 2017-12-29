// �ۼ���: TA �����

#include <stdio.h>

// �Լ� ���� ����
void printNumber(int num);
double average(int num);

int main(void) {
	int num;

	// ����ڷκ��� ������ �Է� ����
	printf("���� �Է�: ");
	scanf("%d", &num);

	// �Է¹��� ���� ���
	printf("�Է��� ���� %d�Դϴ�.\n", num);

	// printNumber �Լ��� ȣ���Ͽ� ���ӵ� 5���� ���� ���
	printf("5�� ���ӵ� ���� ");
	printNumber(num);
	printf("�Դϴ�.\n");

	// average �Լ��� ȣ���Ͽ� ���ӵ� 5���� ������ ��� ���
	printf("���ӵ� ���� ����� %.2f�Դϴ�.\n", average(num));

	return 0;
}

void printNumber(int num) {
	int i; // �ݺ����� ���� ����

	// ���ӵ� 5���� ���� ���
	for (i = 0; i < 5; ++i)
		printf("%d ", num + i);
}

double average(int num) {
	double total = 0.0; // ���ӵ� 5���� ������ ��
	int i; // �ݺ����� ���� ����

	// ������ �հ踦 ����
	for (i = 0; i < 5; ++i)
		total += num + i;

	// ����� ��ȯ
	return total / 5;
}

/*
double average(int num) {
	// ����� ��ȯ
	return (double)(num + 2);
}
*/