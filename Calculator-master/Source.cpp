#include <stdio.h>
int main(void)
{
	char res;
	printf("このプログラムは四則演算を行うプログラムです。\n");
	printf("足し算を行うには\"A\"を入力してください。\n");
	printf("引き算を行うには\"B\"を入力してください。\n");
	printf("掛け算を行うには\"C\"を入力してください。\n");
	printf("割り算を行うには\"D\"を入力してください。\n");

	double c,d,sum,num,a,b;
	printf("A・B・C・Dいずれかを１文字入力してください。\n");
	res = getchar();
	if (res == 'A'||res == 'a') {
		printf("足し算を行います。\n　足し算を行う2つの数を入力してください。\n");
		printf("1番目の数字を入力してください。\n");
		scanf("%lf", &a);
		printf("2番目の数字を入力してください。\n");
		scanf("%lf", &b);
		num = (double)a + (double)b;
		printf("和は%lfです。\n", num);
	}
	else if (res == 'B'||res == 'b') {
		printf("引き算を行います。\n 引き算を行う2つの数を入力してください。\n");
		printf("1番目の数字を入力してください。\n");
		scanf("%lf", &a);
		printf("2番目の数字を入力してください。\n");
		scanf("%lf", &b);
		num = a - b;
		printf("差は%lfです。\n", num);
	}
	else if (res == 'C'||res == 'c') {
		printf("掛け算を行います。\n　掛け算を行う2つの数を入力してください。\n");
		printf("1番目の数字を入力してください。\n");
		scanf("%lf", &a);
		printf("2番目の数字を入力してください。\n");
		scanf("%lf", &b);
		num = a * b;
		printf("積は%lfです。\n", num);
	}
	else if (res == 'D'||res == 'd') {
		printf("割り算を行います。\n 割り算を行う2つの数を入力してください。\n");
		printf("1番目の数字を入力してください。\n");
		scanf("%lf", &c);
		printf("2番目の数字を入力してください。\n");
		scanf("%lf", &d);
		sum = (double)c / (double)d;
		printf("商は%lfです。\n", sum);
	}
	return 0;
}
