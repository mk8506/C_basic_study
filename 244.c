#include <stdio.h> // main.c
#include <stdlib.h>
// ���ڿ��� ��ȣ�� ������ ��ȯ�ϴ� �Լ�
// char** (��ȯ��) : ���� ���ڿ��� ������ ������ �迭�� ���� �ּҸ� ��ȯ
// char* str : ���� ���ڿ��� ������ �迭�� ���� �ּ�
// char sign : ���� ��ȣ
// int* cnt : ���� ���ڿ��� ����
char** split(char* str, char sign, int* cnt) {
    
    char* wordCount = str;
    int COUNT = 0;
    while (*wordCount) {
        if (*wordCount == sign) {
            COUNT++;
        }
        wordCount++;
    }
    COUNT++;
    printf("%d\n", COUNT);
    char** ary = (char**)calloc(COUNT, sizeof(char));  //�ܾ� ������ŭ �� �Ҵ�
    
    wordCount = str;
    int* letter = (int*)calloc(COUNT, sizeof(int)); //�ܾ� ������ŭ
    for (int i = 0; i < COUNT;  i++) {  //�� ����
        for (; *wordCount != sign && *wordCount != '\0'; wordCount++) {
            letter[i]++;
        }
        wordCount++;
        printf("%d\t", letter[i]);
    } //�ܾ�� ���ڼ� ����
    printf("\n");

    for (int i = 0; i < COUNT; i++) {
        ary[i] = (char*)malloc(sizeof(char) * (letter[i]+1));
    } //���ڼ���ŭ ĭ �Ҵ�
    
    wordCount = str;
            for (int i = 0; i < COUNT; i++) {
                for (int j = 0; j < letter[i]+1; j++, wordCount++) {
                    if (*wordCount == sign) { ary[i][j] = '\0';}
                    else ary[i][j] = *wordCount;
                    //printf("%c", ary[i][j]);
                }
                //printf("\n");
            } 

    free(letter);

    *cnt = COUNT;

    return ary;
}
int main() {
    int cnt1 = 0;
    char** arr1 = split("Hello World! Welcome to the programming!", ' ', &cnt1);
    for (int i = 0; i < cnt1; i++) { printf("%s\n", arr1[i]); free(arr1[i]); }
    free(arr1);
    //printf("--------------------\n");

    int cnt2 = 0;
    char** arr2 = split("Hi.C Language.I like it!", '.', &cnt2);
    for (int i = 0; i < cnt2; i++) { printf("%s\n", arr2[i]); free(arr2[i]); }
    free(arr2);
}
