#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h> // time()

#define COUNT 100
#define RANGE 1000
#define count(ary) (sizeof(ary)/sizeof(ary[0]))
#define swap(type,a,b) {type temp=a;a=b;b=temp;}

//������ ���� Ȧ���� �տ� ¦���� �ڿ� ����
int random(int* ary, int size);
//
void SequentialSort(int* ary, int start, int end);
void SelectionSort(int* ary, int start, int end);
void Print(int* ary, int start, int end);

int main() {
    srand((unsigned int)time(NULL));
    int value[COUNT] = { 0 };//100ĭ�� �迭�� ����� �ʱ�ȭ

    int separate = random(value, count(value));//value�迭���� Ȧ���� ¦�� �����ֱ�
    Print(value, 0, count(value));//�迭 ���
    SequentialSort(value, 0, separate);
    SelectionSort(value, separate, count(value));

    printf("\t[Ȧ�� ���]\n");
    Print(value, 0, separate);//separate return 
    printf("\t[¦�� ���]\n");
    Print(value, separate, count(value));

    return 0;
}
int random(int* ary, int size) {//�μ��� �迭�� �迭�� ĭ ��
    int odd = 0, even = size;//Ȧ���� �տ� ¦���� �ڿ�
    for (int i = 0; i < size; i++) {
        int number = rand() % RANGE + 1;
        if (number % 2 == 0) *(ary +(--even)) = number;//������ ���� ¦���̸� �� �� ĭ�� ����
        else *(ary + (odd++)) = number;//Ȧ���̸� �����ϰ� ���� ĭ����
    }
    return odd;//Ȧ�� ����� ������ ĭ ��ȣ+1 ��ȯ
}
void SequentialSort(int* ary, int start, int end) {//��������
    for (int i = start; i < end - 1; i++) {
        for (int j = i + 1; j < end; j++) {
            if (*(ary+i) > *(ary + j)) swap(int, *(ary + i), *(ary + j));
        }
    }
}
void SelectionSort(int* ary, int start, int end) {//��������
    for (int i = end - 1; i > start; i--) {
        int MAX = i;
        for (int j = start; j < i; j++) {
            if (*(ary + MAX) < *(ary + j)) MAX = j;
        }
        swap(int, *(ary + MAX), *(ary + i));
    }
}
void Print(int* ary, int start, int end) {//�迭�̸��� ����� ���۰� ��
    for (int i = start; i < end; i++) {
        printf("value[%05d] = %5d \n", i, *(ary + i));//�迭 ĭ ��ȣ�� ����� �� ���
    }
    printf("\n\n");
}
