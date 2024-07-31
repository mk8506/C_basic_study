#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("반 수 입력: ");

    scanf_s("%d", &n);

    while (getchar() != '\n');


    int** score;

    score = (int**)malloc(n * sizeof(int*)); //줄 할당


    int* STU = (int*)malloc(sizeof(int) * n);

   // if (STU == NULL) error("학생 수 배열 생성 실패");

    for (int i = 0; i < n; i++) {

        printf("%d반 학생 수 입력: ", i + 1);

        scanf_s("%d", &STU[i]);

        while (getchar() != '\n');

        score[i] = (int*)malloc(sizeof(int) * STU[i]); //칸 할당

    }


    int* sum = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {

        printf("%d 반: ", i + 1);

        for (int j = 0; j < STU[i]; j++) {

            score[i][j] = rand() % 100 + 1;

            sum[i] += score[i][j];

            printf("%4d", score[i][j]);

        }

        printf("\tsum %d = %d\n", i+1, sum[i]);

    }

    printf("\n");

    float* avg = (float*)malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++) {

        avg[i] = (float) sum[i] / STU[i];

        printf("%d 반 평균 : %f\n", i+1, avg[i]);

    }

    printf("\n");

    float* SUM = (float*)calloc(n, sizeof(float));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < STU[i]; j++) {

            SUM[i] += (score[i][j] - avg[i]) * (score[i][j] - avg[i]);

        }

        printf("%d 반 분산: %f\n", i + 1, SUM[i] / STU[i]);

    }

    for (int i = 0; i < n; i++) {

        free(score[i]);

    }

    free(score);

    free(STU);
    free(sum);
    free(SUM);
    free(avg);
}