#include <stdio.h> // main.c
#include <stdlib.h>
// 문자열을 기호로 나누어 반환하는 함수
// char** (반환값) : 나뉜 문자열을 저장한 포인터 배열의 시작 주소를 반환
// char* str : 나눌 문자열을 저장한 배열의 시작 주소
// char sign : 구분 기호
// int* cnt : 나뉜 문자열의 수량
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
    char** ary = (char**)calloc(COUNT, sizeof(char));  //단어 개수만큼 줄 할당
    
    wordCount = str;
    int* letter = (int*)calloc(COUNT, sizeof(int)); //단어 개수만큼
    for (int i = 0; i < COUNT;  i++) {  //줄 돌기
        for (; *wordCount != sign && *wordCount != '\0'; wordCount++) {
            letter[i]++;
        }
        wordCount++;
        printf("%d\t", letter[i]);
    } //단어마다 글자수 세기
    printf("\n");

    for (int i = 0; i < COUNT; i++) {
        ary[i] = (char*)malloc(sizeof(char) * (letter[i]+1));
    } //글자수만큼 칸 할당
    
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
