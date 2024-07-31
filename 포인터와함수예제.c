//#include <stdio.h>
//#include <string.h>
// 함수 정의부 작성하기
// str 문자열의 모든 소문자를 대문자로 변환
// 변경한 문자열의 시작 주소 반환
// 실패 : NULL
//char* strupr(char* str);
// str 문자열의 모든 대문자를 소문자로 변환
// 변경한 문자열의 시작 주소 반환
// 실패 : NULL
//char* strlwr(char* str);
// str 문자열의 순서를 거꾸로 교환(좌우 반전)
// 변경한 문자열의 시작 주소 반환
// 실패 : NULL
//char* strrev(char* str);
//int main()
//{
//    char arr[] = "AbCdEfg123!@# Test";
//    printf("  원본 : %s \n", arr);
//     Test Case
//    printf("대문자 : %s \n", strupr(arr));    // ABCDEFG123!@# TEST
//    printf("소문자 : %s \n", strlwr(arr));    // abcdefg123!@# test
//    printf("  역순 : %s \n", strrev(arr));    // tset #@!321gfedcba
//
//     반환값 char*으로 사용하는 이유
//     f(g(x)) == strrev(strupr(arr)), 합성함수 적용
//    printf(" 대+역 : %s \n", strrev(strupr(arr)));    // ABCDEFG123!@# TEST
//}
//
//
//char* strupr(char* str) {
//    char* pCh = str;//같은 위치 가리킴
//    while (*pCh != '\0') {
//        if ('a' <= *pCh && *pCh <= 'z') {
//            *pCh = *pCh - 'a' + 'A';
//        }
//        pCh++;
//    }
//    return str;
//}
//
//char* strlwr(char* str) {
//    char* pCh = str;
//    while (*pCh != '\0') {
//        if ('A' <= *pCh && *pCh <= 'Z') {
//            *pCh = *pCh - 'A' + 'a';
//        }
//        pCh++;
//    }
//    return str;
//}
//
//char* strrev(char* str) {
//    char* pCh = str;
//    while (*pCh != '\0') pCh++;//pCh는 널문자에 도달
//    char* pCh2 = pCh-1;
//    char* pCh1 = str;
//    int half_len = (pCh2 - pCh1) / 2;        //start과 end가  start > end 가 됐을 때 break;으로 써도됨
//    for (int i = 0; i <= half_len; i++) {
//        char temp = *pCh1; //주소가 아닌 저장된 값이 바껴야함
//        *pCh1 = *pCh2;
//        *pCh2 = temp;
//        pCh1++;
//        pCh2--;
//    }
//    return str;
//}
//


//#include <stdio.h> // 함수 정의부 작성하기
//// str 문자열 내에 ch와 같은 문자를 찾고 처음으로 같은 메모리 주소를 반환
//// 실패 : NULL (없음)
//char* strchr(char* str, int ch);
//// str 문자열 내에 ch와 같은 문자의 수량을 반환
//// 실패 : 0, 오류 : -1 (str 가리키는 공간 없음)
//int strcnt(char* str, int ch);
//// str 문자열에서 search와 같은 문자열을 찾고 처음으로 같은 문자열의 시작 주소 반환
//// 실패 : NULL (문자 없음 or 문자열 없음)
//char* strstr(char* str, char* search);
//
//int main()
//{
//    char arr1[] = "strawberry", arr2[] = "strong man";
//    // %s : 문자열 주소부터 \0까지 출력
//    printf("문자열 출력 1 : %s\n", arr1); // strawberry
//    printf("문자열 출력 2 : %s\n", arr2); // strong man
//
//    // Test Case
//    // %s : 문자열 주소부터 \0까지 출력
//    // 'b' 글자 위치부터 \0까지 출력
//    printf("문자   찾기   : %s\n", strchr(arr1, 'b')); // berry
//    printf("문자   찾기   : %s\n", strchr(arr2, 'p')); // (null)
//    printf("문자   수량   : %d\n", strcnt(arr1, 'r'));    // 3
//    printf("문자   수량   : %d\n", strcnt(NULL, 'r'));    // -1
//    printf("문자열 검색   : %s\n", strstr(arr1, "raw"));  // rawberry
//    printf("문자열 검색   : %s\n", strstr(arr2, "mama")); // (null)
//}
//
//char* strchr(char* str, int ch) {
//    char* pCh = str;
//    while (*pCh != '\0') {
//        if (*pCh == ch) {
//            break;
//        }
//        pCh++;
//    }
//    return pCh;
//}
//// str 문자열 내에 ch와 같은 문자의 수량을 반환
//// 실패 : 0, 오류 : -1 (str 가리키는 공간 없음)
//int strcnt(char* str, int ch) {
//    if (str == NULL) return -1; //return하면 끝
//    char* pCh = str;
//    int count = 0;
//    while (*pCh != '\0') {
//        if (*pCh == ch) {
//            count++;
//        }
//        pCh++;
//    }
//    return count;
//}
//// str 문자열에서 search와 같은 문자열을 찾고 처음으로 같은 문자열의 시작 주소 반환
//// 실패 : NULL (문자 없음 or 문자열 없음)
//char* strstr(char* str, char* search) {
//    char* pCh = str;
//    char* pChSch = search;
//    char* pChRE = 0;
//    while (*pCh != '\0') {
//        if (*pCh == *pChSch) {
//            pChRE = pCh;
//            while (*pChSch != '\0') {
//                if (*pCh == *pChSch) pChSch++;
//                else { return 0; }
//                pCh++;
//            }
//        }
//        pCh++;
//    }
//    return pChRE;
//}

//#include <stdio.h>
//
////char* strstr(char* str, char* search) {
////    //if (str == NULL || search == NULL) return NULL;
////    for (; *str != '\0'; str++) {  //
////        for (char* pPos = str, *pSearch = search;  
////            *pPos == *pSearch || *pSearch == '\0';
////            pPos++, pSearch++) {
////            if (*pSearch == '\0')  return str;
////        }
////    }
////    return 0;
////}
//
//char* strstr(char* str, char* search) {
//    char* p = str, * ps = search;
//    int i = 0;
//    while (*p && *ps) {
//        if (*p == *ps) { p++; ps++; }
//        else { i++; p = str + i; }
//        if (*ps == '\0') return (str + i);
//    }
//    return 0;
//}
//
//int main()
//{
//    char arr1[] = "strawberry", arr2[] = "strong man";
//    // %s : 문자열 시작 주소부터 \0까지 출력
//    printf("문자열 출력 1 : %s\n", arr1); // strawberry
//    printf("문자열 출력 2 : %s\n", arr2); // strong man
//
//    printf("문자열 검색   : %s\n", strstr(arr1, "raw"));  // rawberry
//    printf("문자열 검색   : %s\n", strstr(arr2, "mama")); // (null)
//}



#include <stdio.h>
// str 문자열을 모두 ch 문자(값)로 초기화
//(변경 기준은 '\0' 이전까지를 의미)
// 실패 : NULL (str 가리키는 공간 없음)
char* strset(char* str, int ch);
// str2 문자열을 str1 문자열로 '\0'까지 복사
// 복사된 문자열 시작 주소 반환
// 실패 : NULL (문자열 입력이 없음.)
char* strcpy(char* str1, char* str2);
// 두 개의 문자열을 아스키 코드 값으로 비교
//  str1  < str2 인 경우 -1 반환
//  str1  > str2 인 경우  1 반환
//  str1 == str2 인 경우  0 반환
int strcmp(char* str1, char* str2);

int main()
{
    char arr1[] = "strawberry", arr2[] = "strong man";
    // %s : 문자열 주소부터 \0까지 출력
    printf("문자열 출력 1 : %s\n", arr1);                  // strawberry
    printf("문자열 출력 2 : %s\n", arr2);                  // strong man
    printf("문자열 출력 3 : %s\n", strset(arr1, '*'));     // **********
    printf("문자열 출력 4 : %s\n", strcpy(arr1, "straw")); // straw
    printf("문자열 비교   : %d\n", strcmp(arr2, arr1));    //  1
    printf("문자열 비교   : %d\n", strcmp(arr1, arr1));    //  0
    printf("문자열 비교   : %d\n", strcmp(arr1, arr2));    // -1
    printf("\n\n");
    return 0;
}

// str 문자열을 모두 ch 문자(값)로 초기화
//(변경 기준은 '\0' 이전까지를 의미)
// 실패 : NULL (str 가리키는 공간 없음)
char* strset(char* str, int ch) {
    char* pCh = str;
    while (*pCh != '\0') {
        *pCh = '*';
        pCh++;
    }
    return str;
}
// str2 문자열을 str1 문자열로 '\0'까지 복사
// 복사된 문자열 시작 주소 반환
// 실패 : NULL (문자열 입력이 없음.)
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
// 두 개의 문자열을 아스키 코드 값으로 비교
//  str1  < str2 인 경우 -1 반환
//  str1  > str2 인 경우  1 반환
//  str1 == str2 인 경우  0 반환
int strcmp(char* str1, char* str2) {
    char* pCh1 = str1,  *pCh2 = str2;
    while (*pCh1 != '\0') {
        if (*pCh1 < *pCh2) { return -1; }
        else if (*pCh1 > *pCh2) { return 1; }
        /*else {
            pCh1++;
            pCh2++;
            continue;
        }*/
        pCh1++;
        pCh2++;
    }
    return 0;
} //보기는 간단한데 cpu 더 많이 쓰는 거 아님?

/*
// 두 개의 문자열을 아스키 코드 값으로 비교
//  str1  < str2 인 경우 -1 반환
//  str1  > str2 인 경우  1 반환
//  str1 == str2 인 경우  0 반환
int strcmp(char* str1, char* str2) {
    if (str1 == NULL) return -1;
    else if (str2 == NULL) return 1; //else는 없음

    while (*str1 && *str2 && *str1 == *str2) {  //둘다 null아닐 때까지 같으면
        str1++, str2++;
    }

    if (*str1 > *str2) return 1; 
    else if (*str1 < *str2) return -1;
    else return 0; //둘 중 하나 null이면
}
*/
