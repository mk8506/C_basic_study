//#include <stdio.h>
//#define max 3
//int main() {
//	int a[max + 1][max + 1] = { 0 }, k = 1;
//	printf("\n2차원 배열 값 입력\n");
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			a[i][j] = k++;
//			printf("%5d", a[i][j]);
//		}printf("\n");
//	}printf("\n");
//
//	printf("\n2차원 배열 값 출력 (배열 접근)\n");
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			printf("%5d", a[i][j]);
//		}printf("\n");
//	}printf("\n");
//
//	int* pa = a[0];
//	printf("\n2차원 배열 값 출력 (포인터 접근)\n");
//	for (int i = 0; i < max+1; i++) {
//		for (int j = 0; j < max+1; j++) {
//			//printf("%5d", *pa++);
//			printf("%5d", *(pa + i * (max + 1) + j));//그 전 줄만큼과 그 칸까지 더한 것을 주소에 더하기 연산a
//		}printf("\n");
//	}printf("\n");
//
//	int(*pAry)[max + 1] = a;
//	printf("\n2차원 배열 값 출력 (포인터 접근2)\n");
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			printf("%5d", pAry[i][j]);
//		}printf("\n");
//	}printf("\n");
//}



char* strstr(char* str, char* search) {
    if (str == NULL || search == NULL) return NULL;
    for (; *str != '\0'; str++) {
        for (char* pPos = str, *pSearch = search;
            *pPos == *pSearch || *pSearch == '\0';
            pPos++, pSearch++) {
            if (*pSearch == '\0')  return str;
        }
    }
    return NULL;
}

int main()
{
    char arr1[] = "strawberry", arr2[] = "strong man";
    // %s : 문자열 시작 주소부터 \0까지 출력
    printf("문자열 출력 1 : %s\n", arr1); // strawberry
    printf("문자열 출력 2 : %s\n", arr2); // strong man

    printf("문자열 검색   : %s\n", strstr(arr1, "raw"));  // rawberry
    printf("문자열 검색   : %s\n", strstr(arr2, "mama")); // (null)
}