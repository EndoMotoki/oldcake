#include <stdio.h>
int main(void)
{
	char res;
	printf("���̃v���O�����͎l�����Z���s���v���O�����ł��B\n");
	printf("�����Z���s���ɂ�\"A\"����͂��Ă��������B\n");
	printf("�����Z���s���ɂ�\"B\"����͂��Ă��������B\n");
	printf("�|���Z���s���ɂ�\"C\"����͂��Ă��������B\n");
	printf("����Z���s���ɂ�\"D\"����͂��Ă��������B\n");

	double c,d,sum,num,a,b;
	printf("A�EB�EC�ED�����ꂩ���P�������͂��Ă��������B\n");
	res = getchar();
	if (res == 'A'||res == 'a') {
		printf("�����Z���s���܂��B\n�@�����Z���s��2�̐�����͂��Ă��������B\n");
		printf("1�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &a);
		printf("2�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &b);
		num = (double)a + (double)b;
		printf("�a��%lf�ł��B\n", num);
	}
	else if (res == 'B'||res == 'b') {
		printf("�����Z���s���܂��B\n �����Z���s��2�̐�����͂��Ă��������B\n");
		printf("1�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &a);
		printf("2�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &b);
		num = a - b;
		printf("����%lf�ł��B\n", num);
	}
	else if (res == 'C'||res == 'c') {
		printf("�|���Z���s���܂��B\n�@�|���Z���s��2�̐�����͂��Ă��������B\n");
		printf("1�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &a);
		printf("2�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &b);
		num = a * b;
		printf("�ς�%lf�ł��B\n", num);
	}
	else if (res == 'D'||res == 'd') {
		printf("����Z���s���܂��B\n ����Z���s��2�̐�����͂��Ă��������B\n");
		printf("1�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &c);
		printf("2�Ԗڂ̐�������͂��Ă��������B\n");
		scanf("%lf", &d);
		sum = (double)c / (double)d;
		printf("����%lf�ł��B\n", sum);
	}
	return 0;
}
