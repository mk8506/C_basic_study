#include<stdio.h>
#include<conio.h>
#include<Windows.h>
int main() {
    CONSOLE_CURSOR_INFO CurInfo; // Ŀ�� �ɼ� ����ü
    CurInfo.dwSize = 1;// Ŀ�� ũ�� (1~100%)
    CurInfo.bVisible = 0; // false
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);//Ŀ�� �����
    COORD pos = { 0, 0 };
    int line = 1;
    while (1) {
        if (_kbhit()) { // Ű���� �Է��� �ִٸ�
            int key = _getch(); // Ű �� �б�
            switch (key) { // Ű ���� ��� ����
            case 'z': line++; break;
            case 'x': line--; break;
            case 'q':
            case 'Q': exit(1); break;
            }
            if (line <= 0) line = 1;
            else if (line > 10) line = 10;
        }
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // Ŀ�� ��ǥ(0,0) �̵�
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % line == 0) printf("��");
                else printf("��");
            }
            printf("\n");
        }
        for (int i = 9; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                if (i % line == 0) printf("��");
                else printf("��");
            }
            printf("\n");
        }
    }
    return 0;
}
