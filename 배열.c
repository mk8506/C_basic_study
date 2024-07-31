#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	/*
	int score[5];
	int i, tot = 0;
	float ave = 0;
	for (i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("%d번 학생의 성적: ", i + 1);
		scanf_s("%d", &score[i]);
		tot += score[i];
	}
	ave = (float)tot / (sizeof(score) / sizeof(score[0]));
	printf("\n총점은 %d점, 평균은 %.2f점.\n", tot, ave);
	*/

	int num[10]; //모르겠으면 노가다로 쓰고나면 반복문 써야하는 게 보임
	for (int i = 0; i < 10; i++) {  //0~9 //sizeof(num)/sizeof(num[0] //_countof(num) <--stdlib.h
		num[i] = rand() % 500 + 1;
		printf("%5d", num[i]);
	}
	printf("\n");
	int max = 0, maxNum = 0;
	for (int j = 0; j <	10; j++) {    //최댓값도 방번호도 배열을 쭉 훑어서 저장해주는 방법으로
		max = (max < num[j]) ? num[j] : max;
		maxNum = (max <= num[j]) ? j : maxNum;
	}
	printf("%d, %d", maxNum, max); 





}