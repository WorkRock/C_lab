/*
// �ʿ��� ������� ����
#include <stdio.h>
// swap �Լ� ���� ����
void swap_d(double a, double b);
void swap_dp(double *pa, double *pb);
void swap_dp_itself(double *pd1, double *);
void swap_dpp(double **ppd1, double **ppd2);

int main()
{
	double a = 20.4, b = 30.9;// double Ÿ�� ���� �� �� ����, �ʱ�ȭ
	double * pa = &a, *pb = &b;// double ������ Ÿ�� ���� �� �� ����, �ʱ�ȭ

	printf("swap �Լ� ��� �� �ʱ� �� \n");
	printf("a = %.2f, b = %.2f \n", a, b);// �� double ���� ���
	printf("pa : %p, pb : %p \n", a, b);
	
	swap_d(a, b);
	printf("swap_d �Լ� ��� �� �ʱ� �� \n");
	printf("a = %.2f, b = %.2f \n", a, b);// swap_d�� ȣ���� �� ���� ���
	printf("pa : %p, pb : %p \n", pa, pb);
	
	swap_dp(pa, pb);
	a = 20.4;
	b = 30.9;
	pa = &a;
	pb = &b;
	
	swap_dpp(&pa, &pb);
	printf("swap_dp �Լ� ��� �� �ʱ� �� \n");
	printf("a = %.2f, b = %.2f \n", a, b);
	printf("pa : %p, pb : %p \n", pa, pb);
	return 0;
}

void swap_d(double d1, double d2)
{
	double temp;// �ӽ� ���� ����

	temp = d1;// d1�� temp�� ����
	d1 = d2;// d1�� d2�� ����
	d2 = temp;// d2�� temp�� ����
}

void swap_dp(double *pd1, double *pd2)
{
	double temp;// �ӽ� ���� ����

	temp = *pd1;// d1�� temp�� ����
	*pd1 = *pd2;// d1�� d2�� ����
	*pd2 = temp;// d2�� tempdp ����
}

void swap_dp_itself(double *pd1, double *pd2)
{
	//������ ��ü�� swap
	double *ptemp;
	ptemp = pd1;
	pd1 = pd2;
	pd2 = pd1;
}

void swap_dpp(double **ppd1, double **ppd2)
{
	double * pptemp;//������ �ӽ� ���� ����

	pptemp = ppd1;
	ppd1 = ppd2;
	ppd2 = pptemp;
}
*/
/*
��¥ : 2016. 11. 07.
����: ������ ������ ���ڿ��� �Է¹޾Ƽ�,
	�ܾ�� �ٸ� �ٿ� ����ϱ�
���� : ���ڿ� �Լ�
�ۼ��� : 201632023 ������
�����̸� : string.c
*/
// ������� ����
#include<stdio.h>
// main�Լ� ����
int main(void)
{
	char input[20];// �Է� ���� �迭 ����
	int i = 0; // �ݺ��� ���� ���� ����

	// ���� ���� ���� �Է� �ޱ�
	fgets(input, sizeof(input), stdin);
	// ������ ������ ���� �� ���ھ� �ݺ�
	while (input[i] != '\0')
	{
		if (input[i] != ' ')// ������ �ƴ� ��� �ش� ���� ���
			fputchar(input[i], stdout);
		else // ������ ��� ���� �ٷ�
			fputc('\n', stdout);// �̵��ϴ� ���� ���

		i++; // ���� ���ڷ� �̵�
	}
	return 0;
}