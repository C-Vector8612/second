#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("请输入员工的销售额：");
	scanf("%d", &num);

	switch (num <= 3000) {
	case 1:
		printf("你有%.2f快钱\n", num * 1.0);
		break;
	case 0://如果大于3000
		switch (num <= 7000) {
		case 1:
			printf("你有%.2f块钱\n", num * 1.1);
			break;
		case 0://如果大于7000
			switch (num < 10000) {
			case 1:
				printf("你有%.2f块钱\n", num * 1.15);
				break;
			case 0://如果大于10000
				printf("你有%.2f块钱\n", num * 1.2);
				break;
			}


		}
	}
	printf("我超阔佬，疯狂星期四v我五十");
}