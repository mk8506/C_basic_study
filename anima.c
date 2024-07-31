#include<stdio.h>
#include<conio.h>
#include<Windows.h>
int main() {
    CONSOLE_CURSOR_INFO CurInfo; // 커서 옵션 구조체
    CurInfo.dwSize = 1;// 커서 크기 (1~100%)
    CurInfo.bVisible = 0; // false
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);//커서 숨기기
    COORD pos = { 0, 0 };
    int line = 1;
    while (1) {
        if (_kbhit()) { // 키보드 입력이 있다면
            int key = _getch(); // 키 값 읽기
            switch (key) { // 키 마다 기능 설정
            case 'z': line++; break;
            case 'x': line--; break;
            case 'q':
            case 'Q': exit(1); break;
            }
            if (line <= 0) line = 1;
            else if (line > 10) line = 10;
        }
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // 커서 좌표(0,0) 이동
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % line == 0) printf("★");
                else printf("☆");
            }
            printf("\n");
        }
        for (int i = 9; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                if (i % line == 0) printf("★");
                else printf("☆");
            }
            printf("\n");
        }
    }
    return 0;
}
