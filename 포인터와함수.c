#include <stdio.h>
int str_len(char* p) {
    int n = 0;
    while (*(p++) != '\0') n++;
    return n;
}
int main() {
    char c[15] = "C language", d[50];
    printf("문자열 길이 : %d\n", str_len(c));

    printf("문자열 입력 : ");
    gets_s(d, (int)sizeof(d));
    printf("문자열 길이 : %d\n", str_len(d));
    return 0;
}
