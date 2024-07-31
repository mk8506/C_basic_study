#define _CRTDBG_MAP_ALLOC

// 파일 경로 , (줄 번호) , {메모리 할당 번호}

// , 블록 형식(표준, 클라이언트, CRT) , 메모리 주소 , 블록 크기(bytes)

#include <stdio.h> // Windows 체크 방법, mac : leaks 명령어 검색

#include <stdlib.h>

#include <Windows.h>

#include <crtdbg.h>

#include <math.h>

void print(int** SquareArray, int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

    }

}

int** spiral(int n) {

    int** spiral;

    spiral = (int**)malloc(n * sizeof(int*)); //줄 할당

    for (int i = 0; i < n; i++) //칸 할당

        spiral[i] = malloc(sizeof(int) * n);

    int x = n - 1, y = 0, key = 1, dir = 0;
    char direction[] = { 'D','L','U','R' };
    for (int i = 0; i < n; i++) spiral[0][i] = key++; // 0번 줄 오른쪽 1번 실행 R
    while (n--)
        for (int z = 0; z < 2; z++)
            switch (direction[(dir++) % 4]) {
            case 'D': for (int i = 0; i < n; i++) spiral[++y][x] = key++; break;
            case 'L': for (int i = 0; i < n; i++) spiral[y][--x] = key++; break;
            case 'U': for (int i = 0; i < n; i++) spiral[--y][x] = key++; break;
            case 'R': for (int i = 0; i < n; i++) spiral[y][++x] = key++; break;
            }



    /*
    int n1 = n;
    
    int num = 1;

    int j = 0;

    for (; j < n1; j++) {  //첫 번째 줄

        spiral[0][j] = num++;

    }

    n1--;

    int i = 0;

    while (n1) {

        for (int z = 0; z < n1; z++) {  //맨 오른쪽

            spiral[++i][j] = num++;

        }

        for (int z = 0; z < n1; z++) {  //맨 아랫줄

            spiral[i][--j] = num++;

        }

        n1--;



        for (int z = 0; z < n1; z++) {  //맨 왼쪽줄

            spiral[--i][j] = num++;

        }

        for (int z = 0; z < n1; z++) {  //둘째줄

            spiral[i][++j] = num++;

        }

        n1--;

    }*/


    /*
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            spiral[i][j] = (i + 1)*(j + 1);

        }

    }*/

    return spiral;

}


void freeSpiral(int** SquareArray, int n) {

    for (int i = 0; i < n; i++) {

        free(SquareArray[i]);

    }

    free(SquareArray);

}



int main() {

    int n;

    srand((unsigned)time(NULL));

    printf("칸 수 입력: ");

    scanf_s("%d", &n);

    while (getchar() != '\n');



    int** ary;

    ary = spiral(n);

    print(ary, n);


    freeSpiral(ary, n);

}