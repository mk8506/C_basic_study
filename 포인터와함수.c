#include <stdio.h>
int str_len(char* p) {
    int n = 0;
    while (*(p++) != '\0') n++;
    return n;
}
int main() {
    char c[15] = "C language", d[50];
    printf("���ڿ� ���� : %d\n", str_len(c));

    printf("���ڿ� �Է� : ");
    gets_s(d, (int)sizeof(d));
    printf("���ڿ� ���� : %d\n", str_len(d));
    return 0;
}
