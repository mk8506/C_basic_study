#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	//int A[100];
	//int B[100];
	//int C[100];
	//for (int i = 0; i < _countof(A); i++) {
	//	A[i] = rand() % 1000 + 1;
	//	printf("%5d", A[i]);
	//}
	//int idx1 = 0, idx2 = 0;  //
	//for (int i = 0; i < _countof(A); i++) {
	//	if (A[i] % 2 == 1) {
	//		B[idx1++] = A[i];
	//	}
	//	else {
	//		C[idx2++] = A[i];
	//	}
	//}

	//for (int i = 0; i < idx1-1 ; i++) {
	//	for (int j = i + 1; j < idx1-1; j++) {
	//		if (B[i] > B[j]) {
	//			int temp = B[i];
	//			B[i] = B[j];
	//			B[j] = temp;
	//		}
	//	}
	//}

	////
	//for (int i = 0; i < idx2-1; i++) {
	//	int idxM = 0;
	//	for (int j = i+1; j < idx2-1; j++) {
	//		if (C[idxM] > C[j]) {
	//			idxM = j;
	//		}
	//	}
	//		int temp = C[i];
	//		C[i] = C[idxM];
	//		C[idxM] = temp;
	//}

	//printf("\n\n");
	//for (int i = 0; i < idx1 - 1; i++) {   //비어있는 방은 출력하지 않도록
	//	printf("%5d", B[i]);
	//}
	//printf("\n\n");
	//for (int i = 0; i < idx2-1; i++) {   //
	//	printf("%5d", C[i]);
	//}

	int score[51][5] = { {"번호", "국어",  "수학", "영어", "탐구" }};
	for (int i = 1; i < sizeof(score) / sizeof(score[0]); i++) {
		for (int j = 1; j < sizeof(score[0]) / sizeof(score[0][0]); j++) {
			score[i][j] = rand() % 100 + 1;
		}
		score[i][0] = i;
	}
	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		for (int j = 0; j < sizeof(score[0]) / sizeof(score[0][0]); j++) {
			printf("%5d", score[i][j]);
		}
		printf("\n\n");
	}
}