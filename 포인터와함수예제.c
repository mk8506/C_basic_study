//#include <stdio.h>
//#include <string.h>
// �Լ� ���Ǻ� �ۼ��ϱ�
// str ���ڿ��� ��� �ҹ��ڸ� �빮�ڷ� ��ȯ
// ������ ���ڿ��� ���� �ּ� ��ȯ
// ���� : NULL
//char* strupr(char* str);
// str ���ڿ��� ��� �빮�ڸ� �ҹ��ڷ� ��ȯ
// ������ ���ڿ��� ���� �ּ� ��ȯ
// ���� : NULL
//char* strlwr(char* str);
// str ���ڿ��� ������ �Ųٷ� ��ȯ(�¿� ����)
// ������ ���ڿ��� ���� �ּ� ��ȯ
// ���� : NULL
//char* strrev(char* str);
//int main()
//{
//    char arr[] = "AbCdEfg123!@# Test";
//    printf("  ���� : %s \n", arr);
//     Test Case
//    printf("�빮�� : %s \n", strupr(arr));    // ABCDEFG123!@# TEST
//    printf("�ҹ��� : %s \n", strlwr(arr));    // abcdefg123!@# test
//    printf("  ���� : %s \n", strrev(arr));    // tset #@!321gfedcba
//
//     ��ȯ�� char*���� ����ϴ� ����
//     f(g(x)) == strrev(strupr(arr)), �ռ��Լ� ����
//    printf(" ��+�� : %s \n", strrev(strupr(arr)));    // ABCDEFG123!@# TEST
//}
//
//
//char* strupr(char* str) {
//    char* pCh = str;//���� ��ġ ����Ŵ
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
//    while (*pCh != '\0') pCh++;//pCh�� �ι��ڿ� ����
//    char* pCh2 = pCh-1;
//    char* pCh1 = str;
//    int half_len = (pCh2 - pCh1) / 2;        //start�� end��  start > end �� ���� �� break;���� �ᵵ��
//    for (int i = 0; i <= half_len; i++) {
//        char temp = *pCh1; //�ּҰ� �ƴ� ����� ���� �ٲ�����
//        *pCh1 = *pCh2;
//        *pCh2 = temp;
//        pCh1++;
//        pCh2--;
//    }
//    return str;
//}
//


//#include <stdio.h> // �Լ� ���Ǻ� �ۼ��ϱ�
//// str ���ڿ� ���� ch�� ���� ���ڸ� ã�� ó������ ���� �޸� �ּҸ� ��ȯ
//// ���� : NULL (����)
//char* strchr(char* str, int ch);
//// str ���ڿ� ���� ch�� ���� ������ ������ ��ȯ
//// ���� : 0, ���� : -1 (str ����Ű�� ���� ����)
//int strcnt(char* str, int ch);
//// str ���ڿ����� search�� ���� ���ڿ��� ã�� ó������ ���� ���ڿ��� ���� �ּ� ��ȯ
//// ���� : NULL (���� ���� or ���ڿ� ����)
//char* strstr(char* str, char* search);
//
//int main()
//{
//    char arr1[] = "strawberry", arr2[] = "strong man";
//    // %s : ���ڿ� �ּҺ��� \0���� ���
//    printf("���ڿ� ��� 1 : %s\n", arr1); // strawberry
//    printf("���ڿ� ��� 2 : %s\n", arr2); // strong man
//
//    // Test Case
//    // %s : ���ڿ� �ּҺ��� \0���� ���
//    // 'b' ���� ��ġ���� \0���� ���
//    printf("����   ã��   : %s\n", strchr(arr1, 'b')); // berry
//    printf("����   ã��   : %s\n", strchr(arr2, 'p')); // (null)
//    printf("����   ����   : %d\n", strcnt(arr1, 'r'));    // 3
//    printf("����   ����   : %d\n", strcnt(NULL, 'r'));    // -1
//    printf("���ڿ� �˻�   : %s\n", strstr(arr1, "raw"));  // rawberry
//    printf("���ڿ� �˻�   : %s\n", strstr(arr2, "mama")); // (null)
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
//// str ���ڿ� ���� ch�� ���� ������ ������ ��ȯ
//// ���� : 0, ���� : -1 (str ����Ű�� ���� ����)
//int strcnt(char* str, int ch) {
//    if (str == NULL) return -1; //return�ϸ� ��
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
//// str ���ڿ����� search�� ���� ���ڿ��� ã�� ó������ ���� ���ڿ��� ���� �ּ� ��ȯ
//// ���� : NULL (���� ���� or ���ڿ� ����)
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
//    // %s : ���ڿ� ���� �ּҺ��� \0���� ���
//    printf("���ڿ� ��� 1 : %s\n", arr1); // strawberry
//    printf("���ڿ� ��� 2 : %s\n", arr2); // strong man
//
//    printf("���ڿ� �˻�   : %s\n", strstr(arr1, "raw"));  // rawberry
//    printf("���ڿ� �˻�   : %s\n", strstr(arr2, "mama")); // (null)
//}



#include <stdio.h>
// str ���ڿ��� ��� ch ����(��)�� �ʱ�ȭ
//(���� ������ '\0' ���������� �ǹ�)
// ���� : NULL (str ����Ű�� ���� ����)
char* strset(char* str, int ch);
// str2 ���ڿ��� str1 ���ڿ��� '\0'���� ����
// ����� ���ڿ� ���� �ּ� ��ȯ
// ���� : NULL (���ڿ� �Է��� ����.)
char* strcpy(char* str1, char* str2);
// �� ���� ���ڿ��� �ƽ�Ű �ڵ� ������ ��
//  str1  < str2 �� ��� -1 ��ȯ
//  str1  > str2 �� ���  1 ��ȯ
//  str1 == str2 �� ���  0 ��ȯ
int strcmp(char* str1, char* str2);

int main()
{
    char arr1[] = "strawberry", arr2[] = "strong man";
    // %s : ���ڿ� �ּҺ��� \0���� ���
    printf("���ڿ� ��� 1 : %s\n", arr1);                  // strawberry
    printf("���ڿ� ��� 2 : %s\n", arr2);                  // strong man
    printf("���ڿ� ��� 3 : %s\n", strset(arr1, '*'));     // **********
    printf("���ڿ� ��� 4 : %s\n", strcpy(arr1, "straw")); // straw
    printf("���ڿ� ��   : %d\n", strcmp(arr2, arr1));    //  1
    printf("���ڿ� ��   : %d\n", strcmp(arr1, arr1));    //  0
    printf("���ڿ� ��   : %d\n", strcmp(arr1, arr2));    // -1
    printf("\n\n");
    return 0;
}

// str ���ڿ��� ��� ch ����(��)�� �ʱ�ȭ
//(���� ������ '\0' ���������� �ǹ�)
// ���� : NULL (str ����Ű�� ���� ����)
char* strset(char* str, int ch) {
    char* pCh = str;
    while (*pCh != '\0') {
        *pCh = '*';
        pCh++;
    }
    return str;
}
// str2 ���ڿ��� str1 ���ڿ��� '\0'���� ����
// ����� ���ڿ� ���� �ּ� ��ȯ
// ���� : NULL (���ڿ� �Է��� ����.)
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
// �� ���� ���ڿ��� �ƽ�Ű �ڵ� ������ ��
//  str1  < str2 �� ��� -1 ��ȯ
//  str1  > str2 �� ���  1 ��ȯ
//  str1 == str2 �� ���  0 ��ȯ
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
} //����� �����ѵ� cpu �� ���� ���� �� �ƴ�?

/*
// �� ���� ���ڿ��� �ƽ�Ű �ڵ� ������ ��
//  str1  < str2 �� ��� -1 ��ȯ
//  str1  > str2 �� ���  1 ��ȯ
//  str1 == str2 �� ���  0 ��ȯ
int strcmp(char* str1, char* str2) {
    if (str1 == NULL) return -1;
    else if (str2 == NULL) return 1; //else�� ����

    while (*str1 && *str2 && *str1 == *str2) {  //�Ѵ� null�ƴ� ������ ������
        str1++, str2++;
    }

    if (*str1 > *str2) return 1; 
    else if (*str1 < *str2) return -1;
    else return 0; //�� �� �ϳ� null�̸�
}
*/
