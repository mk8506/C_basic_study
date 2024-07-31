//#include <stdio.h>
//#define swap(type, A, B) { type T = A; A = B; B = T; }
//// 문자열 왼쪽 회전 : string rotate left
//// 가장 앞의 문자를 가장 뒤로 보낸다.
//// 실패 : NULL(str 가리키는 공간 없음)
//char* strrtl(char* str);
//// 문자열 오른쪽 회전 : string rotate right
//// 가장 뒤의 문자를 가장 앞으로 보낸다.
//// 실패 : NULL(str 가리키는 공간 없음)
//char* strrtr(char* str);
//// 문자열->정수 변환 : string to integer
//// 문자열 숫자를 정수 값으로 반환
////(문자열 중간에 숫자가 아닌 경우 종료)
//// 실패 : -1 (str 가리키는 공간 없음)
//int stoi(char* str);
//
//int main()
//{
//    char arr[] = "C Language!@#";
//
//    // %s : 문자열 주소부터 \0까지 출력
//    printf("문자열 원본  : %s\n\n", arr);
//    // C Language!@#
//
//    // 문자열 왼쪽 회전
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//        printf("문자열 회전L : %s\n", strrtl(arr));
//    //  Language!@#C
//    // Language!@#C
//    // anguage!@#C L
//    // ...
//    printf("\n");
//
//    // 문자열 오른쪽 회전
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//        printf("문자열 회전R : %s\n", strrtr(arr));
//    // #C Language!@
//    // @#C Language!
//    // !@#C anguage
//    // ...
//    printf("\n");
//
//    // 문자열 -> 숫자 변환 + 왼쪽 회전
//    printf("문자열 숫자 변환 : %d\n", stoi(NULL));
//    //  0
//    char number1[] = "1234";
//    printf("문자열 숫자 변환 : %d\n", stoi(number1));
//    //  1234
//    char number2[] = "-2341";
//    printf("문자열 숫자 변환 : %d\n", stoi(number2));
//    // -2341
//    // 문자열 -> 숫자 변환 (숫자 + 문자 혼합)
//    printf("문자열 숫자 변환 : %d\n", stoi("5678AB"));
//    // 5678
//    printf("\n");
//}
//
//// 문자열 왼쪽 회전 : string rotate left
//// 가장 앞의 문자를 가장 뒤로 보낸다.
//// 실패 : NULL(str 가리키는 공간 없음)
//char* strrtl(char* str) {
//    char* pCh = str;
//    char* pCh1 = str + 1;
//    char temp = *pCh;
//    while (*pCh1) {
//        *pCh = *pCh1;
//        pCh++, pCh1++;
//    }
//    *pCh = temp;
//    return str;
//}
//// 문자열 오른쪽 회전 : string rotate right
//// 가장 뒤의 문자를 가장 앞으로 보낸다.
//// 실패 : NULL(str 가리키는 공간 없음)
//char* strrtr(char* str) {
//    char* pCh = str;
//    while (*pCh) pCh++;  //null
//    pCh--; //null 전
//    char temp = *pCh;  //null 전 값
//    char* pCh1 = pCh - 1; //그 전 값
//    while (pCh != str) {
//        *pCh = *pCh1; //null 전부터 그 전값을 넣기
//        pCh--; pCh1--;
//    }
//    *str = temp; //첫번째 칸에 null 전 넣기
//    return str;
//}
// //str값과 p++반복 값 교환
//
//// 문자열->정수 변환 : string to integer
//// 문자열 숫자를 정수 값으로 반환
////(문자열 중간에 숫자가 아닌 경우 종료)
//// 실패 : -1 (str 가리키는 공간 없음)
//int stoi(char* str) {
//	if (str == NULL) return -1; //예외
//    char* p = str;
//    int sum = 0;
//        if (*p == '-') {
//            p++;
//            for (;
//                *p != '\0' && *p >= '0' && *p <= '9';
//                sum *= 10, sum -= *p - '0', p++){}  //sum = sum * 10 + (*p - '0')
//        }
//        else {
//            while (*p != '\0' && *p >= '0' && *p <= '9') {  //알파벳 없으면 null까지
//                sum *= 10;  //반복적으로 자릿수 높이기
//                sum += *p - '0';  //아스키코드 숫자(문자열)는 0이 48
//                p++;
//            }
//        }
//    return sum;
//}
//음수면 마지막에 -1 곱해주기



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int strcnt(char* str, int ch) {
    if (str == NULL) return -1; //return하면 끝
    char* pCh = str;
    int count = 0;
    while (*pCh != '\0') {
        if (*pCh == ch) {
            count++;
        }
        pCh++;
    }
    return count;
}

char* strcpy(char* str1, char* str2) {
    char* pCh1 = str1;
    while (*str2) {
        *pCh1 = *str2;
        pCh1++;
        str2++;
    }
    *pCh1 = '\0';
    return str1;
}

int strcmp(char* str1, char* str2) {
    char* pCh1 = str1, * pCh2 = str2;
    while (*pCh1 != '\0') {
        if (*pCh1 < *pCh2) { return -1; }
        else if (*pCh1 > *pCh2) { return 1; }
        pCh1++;
        pCh2++;
    }
    return 0;
}

// 문자열 1행 랜덤 생성
void RandomAlphabet(char* pArr, int column);
// 문자열 행 정렬 : random[10][11]에 각 행별로 저장된 문자열을 사전순(A~Z)으로 정렬
void SentenceSort(char* pArr, int row, int column);
// 문자열 안에 사용된 알파벳의 수량 확인하는 함수
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT);

int main() {
    srand(time(NULL));

    // 문자열 저장 공간 구성
    char random[10][11] = { 0 };
    // row : 세로 (줄) , column : 가로 (칸)
    int row = _countof(random), column = _countof(random[0]);

    // random 배열의 각 줄마다 알파벳 랜덤 저장
    for (int i = 0; i < row; i++) {
        RandomAlphabet(random[i], column);
        printf("랜덤 문자열 출력 : %s\n", random[i]); // 랜덤 문자열 출력
    }

    printf("\n\n");
    // 각 줄의 문자열을 사전 기준( a ~ z ) 정렬
    SentenceSort(&random[0][0], row, column);

    for (int i = 0; i < row; i++)
        printf("랜덤 문자열 출력 : %s\n", random[i]); // 랜덤 문자열 출력

    //// 알파벳 수량 저장할 배열
    //// A ~ Z까지의 알파벳을 0~25번 칸마다 수량을 저장할 배열
    //// A[ 0] : A 의 개수 저장
    //// A[ 1] : B 의 개수 저장
    //// A[ 2] : C 의 개수 저장
    //// ...
    //// A[25] : Z 의 개수 저장
    //int AlphabetCount[26] = { 0 };

    //// AlphabetCount 배열에 알파벳 수량 저장 함수
    //AlphabetCNT(random[0], row, column, AlphabetCount);

    //// 알파벳 별 수량 출력
    //for (int i = 0; i < _countof(AlphabetCount); i++)
    //    printf("%2c : %3d개 ", 'A' + i, AlphabetCount[i]);
}

// 문자열 1행 랜덤 생성
void RandomAlphabet(char* pArr, int column) {
    char* p = pArr;
    int AtoZ = 'Z' - 'A' + 1;
    for (int i = 0; i < column - 1; i++, p++) {
        *p = rand() % AtoZ + 'A';
    }
    *p = '\0';  //마지막 칸에 null
}
// 문자열 행 정렬 : random[10][11]에 각 행별로 저장된 문자열을 사전순(A~Z)으로 정렬
void SentenceSort(char* pArr, int row, int column) {  //오류도 있지만 줄 전첼르 swap하려면 배열 필요
    char* p = pArr;
    char* p1 = p + column;
    char* min = p;
    for (int i = 0; i < row; p++, i++) {
        for (int j = 1; j < row; p1 = p + (column * j), j++) {
            if (*min > *p1) {
                min = p1;
            }
        }
        char temp = *p;
        *p = *min;
        *min = temp;
    }
}
// 문자열 안에 사용된 알파벳의 수량 확인하는 함수
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT) {}




/*
// 문자열 행 정렬 : random[10][11]에 각 행별로 저장된 문자열을 사전순(A~Z)으로 정렬
void SentenceSort(char* pArr, int row, int column) {
    for (int i = 0; i < row - 1; i++) //비교1
        for (int j = i + 1; j < row; j++) //비교2
            if (strcmp(pArr + i * column, pArr + j * column) > 0) //오른쪽이 더 크면 -1반환 , 0보다 크면 이므로 1이면 왼쪽이 더 클 경우
            {
                char temp[11] = { 0 }; //한 줄 배열 초기화
                strcpy(temp, pArr + i * column);  //오른쪽을 왼쪽에 복사, 더 크면 temp에 복사
                strcpy(pArr + i * column, pArr + j * column); //i줄과 j줄 swap
                strcpy(pArr + j * column, temp); //결국 순차정렬
            }
}
// 문자열 안에 사용된 알파벳의 수량 확인하는 함수
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT) {
    for (char* pCheck = pArr; pCheck != (pArr + (row * column) - 1); pCheck++)
        if ('A' <= *pCheck && *pCheck <= 'Z')
            ArrayCNT[*pCheck - 'A']++;  //개수 배열[알파벳 순서 숫자]를 ++,    결국 아스키코드 활용
}
*/