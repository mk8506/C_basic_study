#include <stdio.h>
#include <stdlib.h>
int main() {
	int num[10]; 
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 500 + 1;
	}
	for (int i = 0; i < _countof(num); i++) {
		for (int j = i+1; j < 10; j++) {    //시작 1, i<j하면 안됨
			if (num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < _countof(num); i++) {
		for (int j = i + 1; j < _countof(num); j++) {
			if (num[i] < num[j]) {
				int temp = num[j];
			}
		}
	}
	for (int k = 0; k < 10; k++) {
		printf("%d  ", num[k]);
	}
}
