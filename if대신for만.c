#include <stdio.h>
int main() {
	int len, wid;
	printf("�밢�� ����: ");
	scanf_s("%d", &len);
	printf("�β�: ");
	scanf_s("%d", &wid);
	for (int i = 1; i <= len * 2; i++) {          //if else�� ���� for�� ���ǽĿ� &&���� ���� �ֱ�
		if (i <= len) {
			for (int j = 1; j <= len - i; j++) { printf("  "); }
			for (int k = 1; 1 < i && i <= wid && k <= wid + (i - 1); k++) { printf("��"); }
			for (int k = 1; (1 >= i || i > wid) && k <= wid; k++) { printf("��"); }
			for (int j = 1; i > wid && j <= i * 2 - 2; j++) { printf("  "); }
			for (int k = 1; 1 < i && i <= wid && k <= wid + (i - 1); k++) { printf("��"); }
			for (int k = 1; (1 >= i || i > wid) && k <= wid; k++) { printf("��"); }
			printf("\n");
		}
		else {
			for (int j = 1; j <= i - len - 1; j++) { printf("  "); }
			if (len * 2 - wid < i && i < len * 2) { for (int k = 1; k <= wid + (len * 2 - i); k++) { printf("��"); } }
			else { for (int k = 1; k <= wid; k++) { printf("��"); } }
			if (len * 2 - wid < i) { printf(""); }
			else { for (int j = 1; j <= (len * 2 - i) * 2; j++) { printf("  "); } }
			if (len * 2 - wid < i && i < len * 2) { for (int k = 1; k <= wid + (len * 2 - i); k++) { printf("��"); } }
			else { for (int k = 1; k <= wid; k++) { printf("��"); } }
			printf("\n");
		}
	}
	return 0;
}
