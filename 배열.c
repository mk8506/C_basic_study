#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	/*
	int score[5];
	int i, tot = 0;
	float ave = 0;
	for (i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("%d�� �л��� ����: ", i + 1);
		scanf_s("%d", &score[i]);
		tot += score[i];
	}
	ave = (float)tot / (sizeof(score) / sizeof(score[0]));
	printf("\n������ %d��, ����� %.2f��.\n", tot, ave);
	*/

	int num[10]; //�𸣰����� �밡�ٷ� ������ �ݺ��� ����ϴ� �� ����
	for (int i = 0; i < 10; i++) {  //0~9 //sizeof(num)/sizeof(num[0] //_countof(num) <--stdlib.h
		num[i] = rand() % 500 + 1;
		printf("%5d", num[i]);
	}
	printf("\n");
	int max = 0, maxNum = 0;
	for (int j = 0; j <	10; j++) {    //�ִ񰪵� ���ȣ�� �迭�� �� �Ⱦ �������ִ� �������
		max = (max < num[j]) ? num[j] : max;
		maxNum = (max <= num[j]) ? j : maxNum;
	}
	printf("%d, %d", maxNum, max); 





}