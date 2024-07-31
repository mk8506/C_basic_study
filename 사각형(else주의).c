#include <stdio.h>
int main() {
	int thk, wid, hgt;        //예외 꽉찬 정사각형 or 하나라도 0
	printf("가로: ");    //범위 나누거나 blank만 생각
	scanf_s("%d", &wid);
	printf("두께: ");
	scanf_s("%d", &thk);
	printf("높이: ");
	scanf_s("%d", &hgt);
	if (wid == 0 || thk == 0 || hgt == 0) { printf("end"); }
	if (wid <= thk * 2 || hgt <= thk * 2) {
		for (int i = 1; i <= hgt; i++) {
			for (int j = 1; j <= wid; j++) { printf("■"); }
			printf("\n");
		}
	} 
	else {   //위에 if랑 두번 겹치지 않게
		for (int i = 1; i <= hgt; i++) {
			for (int j = 1; j <= wid; j++) {
				if ((i <= thk || i > hgt - thk) || (j <= thk || j > wid - thk)) { printf("■"); } //or 
				else { printf("  "); }
			}
			printf("\n");
		}

	}
}