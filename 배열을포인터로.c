#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h> // time()

#define COUNT 100
#define RANGE 1000
#define count(ary) (sizeof(ary)/sizeof(ary[0]))
#define swap(type,a,b) {type temp=a;a=b;b=temp;}

//랜덤한 값이 홀수면 앞에 짝수면 뒤에 저장
int random(int* ary, int size);
//
void SequentialSort(int* ary, int start, int end);
void SelectionSort(int* ary, int start, int end);
void Print(int* ary, int start, int end);

int main() {
    srand((unsigned int)time(NULL));
    int value[COUNT] = { 0 };//100칸의 배열을 만들고 초기화

    int separate = random(value, count(value));//value배열에서 홀수와 짝수 나눠주기
    Print(value, 0, count(value));//배열 출력
    SequentialSort(value, 0, separate);
    SelectionSort(value, separate, count(value));

    printf("\t[홀수 목록]\n");
    Print(value, 0, separate);//separate return 
    printf("\t[짝수 목록]\n");
    Print(value, separate, count(value));

    return 0;
}
int random(int* ary, int size) {//인수는 배열과 배열의 칸 수
    int odd = 0, even = size;//홀수는 앞에 짝수는 뒤에
    for (int i = 0; i < size; i++) {
        int number = rand() % RANGE + 1;
        if (number % 2 == 0) *(ary +(--even)) = number;//랜덤한 값이 짝수이면 그 전 칸에 저장
        else *(ary + (odd++)) = number;//홀수이면 저장하고 다음 칸으로
    }
    return odd;//홀수 저장된 마지막 칸 번호+1 반환
}
void SequentialSort(int* ary, int start, int end) {//순차정렬
    for (int i = start; i < end - 1; i++) {
        for (int j = i + 1; j < end; j++) {
            if (*(ary+i) > *(ary + j)) swap(int, *(ary + i), *(ary + j));
        }
    }
}
void SelectionSort(int* ary, int start, int end) {//선택정렬
    for (int i = end - 1; i > start; i--) {
        int MAX = i;
        for (int j = start; j < i; j++) {
            if (*(ary + MAX) < *(ary + j)) MAX = j;
        }
        swap(int, *(ary + MAX), *(ary + i));
    }
}
void Print(int* ary, int start, int end) {//배열이름과 출력할 시작과 끝
    for (int i = start; i < end; i++) {
        printf("value[%05d] = %5d \n", i, *(ary + i));//배열 칸 번호와 저장된 값 출력
    }
    printf("\n\n");
}
