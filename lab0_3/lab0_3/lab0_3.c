#include<stdio.h>

void main()
{
	double str[] = { -5.0, 0.2, 7.0, 9.5, 15.0, 25.5, 28.0, 30.5, 29.5, 18.5, 8.0, -1.5 };
	int a;
	int roof = 0;
	/*
	while (1)
	{
		printf("\n��(1~12)�� �Է��ϼ��� : ");
		scanf_s("%d", &a);

		if (a >= 1 && a <= 12)
		{
			printf("\n%d���� ��� ��� = %.1f\n\n", a, str[a - 1]);
			break;
		}
		else
			printf("\n�� �Է� ���ֽñ� �ٶ��ϴ�.\n\n");
	}
	*/
	while (roof == 0)
	{
		printf("��(1~12)�� �Է��ϼ��� : ");
		scanf_s("%d", &a);

		if (a >= 1 && a <= 12)
		{
			printf("\n%d���� ��� ��� = %.1f\n\n", a, str[a - 1]);
			roof = 1;
		}
		else
			printf("\n�� �Է� ���ֽñ� �ٶ��ϴ�.\n\n");
	}
	
	
}