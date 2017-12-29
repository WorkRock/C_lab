#include<stdio.h>

int main()
{
	char str[30];
	int ch;
	FILE *fp = fopen("data.txt", "rt");
	
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}
	
	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	/*fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Lee \n", fp);
	fputs("Your name is Woo \n", fp);
	fclose(fp);*/
	return 0;
}