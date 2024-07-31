//#include <stdio.h>
//#define swap(type, A, B) { type T = A; A = B; B = T; }
//// ���ڿ� ���� ȸ�� : string rotate left
//// ���� ���� ���ڸ� ���� �ڷ� ������.
//// ���� : NULL(str ����Ű�� ���� ����)
//char* strrtl(char* str);
//// ���ڿ� ������ ȸ�� : string rotate right
//// ���� ���� ���ڸ� ���� ������ ������.
//// ���� : NULL(str ����Ű�� ���� ����)
//char* strrtr(char* str);
//// ���ڿ�->���� ��ȯ : string to integer
//// ���ڿ� ���ڸ� ���� ������ ��ȯ
////(���ڿ� �߰��� ���ڰ� �ƴ� ��� ����)
//// ���� : -1 (str ����Ű�� ���� ����)
//int stoi(char* str);
//
//int main()
//{
//    char arr[] = "C Language!@#";
//
//    // %s : ���ڿ� �ּҺ��� \0���� ���
//    printf("���ڿ� ����  : %s\n\n", arr);
//    // C Language!@#
//
//    // ���ڿ� ���� ȸ��
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//        printf("���ڿ� ȸ��L : %s\n", strrtl(arr));
//    //  Language!@#C
//    // Language!@#C
//    // anguage!@#C L
//    // ...
//    printf("\n");
//
//    // ���ڿ� ������ ȸ��
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//        printf("���ڿ� ȸ��R : %s\n", strrtr(arr));
//    // #C Language!@
//    // @#C Language!
//    // !@#C anguage
//    // ...
//    printf("\n");
//
//    // ���ڿ� -> ���� ��ȯ + ���� ȸ��
//    printf("���ڿ� ���� ��ȯ : %d\n", stoi(NULL));
//    //  0
//    char number1[] = "1234";
//    printf("���ڿ� ���� ��ȯ : %d\n", stoi(number1));
//    //  1234
//    char number2[] = "-2341";
//    printf("���ڿ� ���� ��ȯ : %d\n", stoi(number2));
//    // -2341
//    // ���ڿ� -> ���� ��ȯ (���� + ���� ȥ��)
//    printf("���ڿ� ���� ��ȯ : %d\n", stoi("5678AB"));
//    // 5678
//    printf("\n");
//}
//
//// ���ڿ� ���� ȸ�� : string rotate left
//// ���� ���� ���ڸ� ���� �ڷ� ������.
//// ���� : NULL(str ����Ű�� ���� ����)
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
//// ���ڿ� ������ ȸ�� : string rotate right
//// ���� ���� ���ڸ� ���� ������ ������.
//// ���� : NULL(str ����Ű�� ���� ����)
//char* strrtr(char* str) {
//    char* pCh = str;
//    while (*pCh) pCh++;  //null
//    pCh--; //null ��
//    char temp = *pCh;  //null �� ��
//    char* pCh1 = pCh - 1; //�� �� ��
//    while (pCh != str) {
//        *pCh = *pCh1; //null ������ �� ������ �ֱ�
//        pCh--; pCh1--;
//    }
//    *str = temp; //ù��° ĭ�� null �� �ֱ�
//    return str;
//}
// //str���� p++�ݺ� �� ��ȯ
//
//// ���ڿ�->���� ��ȯ : string to integer
//// ���ڿ� ���ڸ� ���� ������ ��ȯ
////(���ڿ� �߰��� ���ڰ� �ƴ� ��� ����)
//// ���� : -1 (str ����Ű�� ���� ����)
//int stoi(char* str) {
//	if (str == NULL) return -1; //����
//    char* p = str;
//    int sum = 0;
//        if (*p == '-') {
//            p++;
//            for (;
//                *p != '\0' && *p >= '0' && *p <= '9';
//                sum *= 10, sum -= *p - '0', p++){}  //sum = sum * 10 + (*p - '0')
//        }
//        else {
//            while (*p != '\0' && *p >= '0' && *p <= '9') {  //���ĺ� ������ null����
//                sum *= 10;  //�ݺ������� �ڸ��� ���̱�
//                sum += *p - '0';  //�ƽ�Ű�ڵ� ����(���ڿ�)�� 0�� 48
//                p++;
//            }
//        }
//    return sum;
//}
//������ �������� -1 �����ֱ�



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int strcnt(char* str, int ch) {
    if (str == NULL) return -1; //return�ϸ� ��
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

// ���ڿ� 1�� ���� ����
void RandomAlphabet(char* pArr, int column);
// ���ڿ� �� ���� : random[10][11]�� �� �ະ�� ����� ���ڿ��� ������(A~Z)���� ����
void SentenceSort(char* pArr, int row, int column);
// ���ڿ� �ȿ� ���� ���ĺ��� ���� Ȯ���ϴ� �Լ�
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT);

int main() {
    srand(time(NULL));

    // ���ڿ� ���� ���� ����
    char random[10][11] = { 0 };
    // row : ���� (��) , column : ���� (ĭ)
    int row = _countof(random), column = _countof(random[0]);

    // random �迭�� �� �ٸ��� ���ĺ� ���� ����
    for (int i = 0; i < row; i++) {
        RandomAlphabet(random[i], column);
        printf("���� ���ڿ� ��� : %s\n", random[i]); // ���� ���ڿ� ���
    }

    printf("\n\n");
    // �� ���� ���ڿ��� ���� ����( a ~ z ) ����
    SentenceSort(&random[0][0], row, column);

    for (int i = 0; i < row; i++)
        printf("���� ���ڿ� ��� : %s\n", random[i]); // ���� ���ڿ� ���

    //// ���ĺ� ���� ������ �迭
    //// A ~ Z������ ���ĺ��� 0~25�� ĭ���� ������ ������ �迭
    //// A[ 0] : A �� ���� ����
    //// A[ 1] : B �� ���� ����
    //// A[ 2] : C �� ���� ����
    //// ...
    //// A[25] : Z �� ���� ����
    //int AlphabetCount[26] = { 0 };

    //// AlphabetCount �迭�� ���ĺ� ���� ���� �Լ�
    //AlphabetCNT(random[0], row, column, AlphabetCount);

    //// ���ĺ� �� ���� ���
    //for (int i = 0; i < _countof(AlphabetCount); i++)
    //    printf("%2c : %3d�� ", 'A' + i, AlphabetCount[i]);
}

// ���ڿ� 1�� ���� ����
void RandomAlphabet(char* pArr, int column) {
    char* p = pArr;
    int AtoZ = 'Z' - 'A' + 1;
    for (int i = 0; i < column - 1; i++, p++) {
        *p = rand() % AtoZ + 'A';
    }
    *p = '\0';  //������ ĭ�� null
}
// ���ڿ� �� ���� : random[10][11]�� �� �ະ�� ����� ���ڿ��� ������(A~Z)���� ����
void SentenceSort(char* pArr, int row, int column) {  //������ ������ �� ��ÿ�� swap�Ϸ��� �迭 �ʿ�
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
// ���ڿ� �ȿ� ���� ���ĺ��� ���� Ȯ���ϴ� �Լ�
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT) {}




/*
// ���ڿ� �� ���� : random[10][11]�� �� �ະ�� ����� ���ڿ��� ������(A~Z)���� ����
void SentenceSort(char* pArr, int row, int column) {
    for (int i = 0; i < row - 1; i++) //��1
        for (int j = i + 1; j < row; j++) //��2
            if (strcmp(pArr + i * column, pArr + j * column) > 0) //�������� �� ũ�� -1��ȯ , 0���� ũ�� �̹Ƿ� 1�̸� ������ �� Ŭ ���
            {
                char temp[11] = { 0 }; //�� �� �迭 �ʱ�ȭ
                strcpy(temp, pArr + i * column);  //�������� ���ʿ� ����, �� ũ�� temp�� ����
                strcpy(pArr + i * column, pArr + j * column); //i�ٰ� j�� swap
                strcpy(pArr + j * column, temp); //�ᱹ ��������
            }
}
// ���ڿ� �ȿ� ���� ���ĺ��� ���� Ȯ���ϴ� �Լ�
void AlphabetCNT(char* pArr, int row, int column, int* ArrayCNT) {
    for (char* pCheck = pArr; pCheck != (pArr + (row * column) - 1); pCheck++)
        if ('A' <= *pCheck && *pCheck <= 'Z')
            ArrayCNT[*pCheck - 'A']++;  //���� �迭[���ĺ� ���� ����]�� ++,    �ᱹ �ƽ�Ű�ڵ� Ȱ��
}
*/