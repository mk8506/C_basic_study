#include <stdio.h>
int main() {
	int thk, wid, hgt;        //���� ���� ���簢�� or �ϳ��� 0
	printf("����: ");    //���� �����ų� blank�� ����
	scanf_s("%d", &wid);
	printf("�β�: ");
	scanf_s("%d", &thk);
	printf("����: ");
	scanf_s("%d", &hgt);
	if (wid == 0 || thk == 0 || hgt == 0) { printf("end"); }
	if (wid <= thk * 2 || hgt <= thk * 2) {
		for (int i = 1; i <= hgt; i++) {
			for (int j = 1; j <= wid; j++) { printf("��"); }
			printf("\n");
		}
	} 
	else {   //���� if�� �ι� ��ġ�� �ʰ�
		for (int i = 1; i <= hgt; i++) {
			for (int j = 1; j <= wid; j++) {
				if ((i <= thk || i > hgt - thk) || (j <= thk || j > wid - thk)) { printf("��"); } //or 
				else { printf("  "); }
			}
			printf("\n");
		}

	}
}