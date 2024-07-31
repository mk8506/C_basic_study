#include <stdio.h>
int main() {
	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % 2 == 0) {
				printf("☆");
			}
			else { printf("★"); //else를 해야지
			}
		}
		printf("\n");
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10 - i; j++) {printf("  ");}
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 0) {
				printf("☆");
			}
			else {
				printf("★"); //else를 해야지
			}
		}
		printf("\n");
	}

	for (int i = 1; i <= 19; i++)
	{
		if (i <= 10)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i % 2 == 0) {
					printf("☆");
				}
				else {
					printf("★"); //else를 해야지
				}
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= 20-i; j++)
			{
				if (i % 2 == 0) {
					printf("☆");
				}
				else {
					printf("★"); //else를 해야지
				}
			}
			printf("\n");
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		if (i <= 10)
		{
			for (int j = 1; j <= 10 - i; j++) { printf("  "); }
			for (int j = 1; j <= i; j++)
			{
				if (i % 2 == 0) {
					printf("☆");
				}
				else {
					printf("★"); //else를 해야지
				}
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= i - 10; j++) { printf("  "); }
			for (int j = 1; j <= 20 - i; j++)
			{
				if (i % 2 == 0) {
					printf("☆");
				}
				else {
					printf("★"); //else를 해야지
				}
			}
			printf("\n");
		}
	}
	*/

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 0) { printf("☆"); }
			else { printf("★"); }
		}
		for (int j = 20; j > i*2; j-=1) { printf("  "); } //for문 조건식
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 0) { printf("☆"); }
			else { printf("★"); }
		}
		printf("\n");
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= 10-i; j++) {
			if (i % 2 == 0) { printf("☆"); }
			else { printf("★"); }
		}
		for (int j = 20; j > 20 - i*2; j -= 1) { printf("  "); } //for문 조건식
		for (int j = 1; j <= 10 - i; j++) {
			if (i % 2 == 0) { printf("☆"); }
			else { printf("★"); }
		}
		printf("\n");
	}

	return 0;
}