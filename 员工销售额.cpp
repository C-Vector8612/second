#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("������Ա�������۶");
	scanf("%d", &num);

	switch (num <= 3000) {
	case 1:
		printf("����%.2f��Ǯ\n", num * 1.0);
		break;
	case 0://�������3000
		switch (num <= 7000) {
		case 1:
			printf("����%.2f��Ǯ\n", num * 1.1);
			break;
		case 0://�������7000
			switch (num < 10000) {
			case 1:
				printf("����%.2f��Ǯ\n", num * 1.15);
				break;
			case 0://�������10000
				printf("����%.2f��Ǯ\n", num * 1.2);
				break;
			}


		}
	}
	printf("�ҳ����У����������v����ʮ");
}