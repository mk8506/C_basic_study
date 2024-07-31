#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define USER 0
int main() {

	/*
	int ans, com;
	do {
		printf("가위: 1, 바위: 2, 보: 3\n숫자를 입력하세요: ");
		scanf_s("%d", &ans);
		while (getchar() != '\n');

		srand((unsigned int)time(NULL));

		com = rand() % 3 + 1; //나머지연산
		printf("%d\n", com); //컴퓨터

		if (ans - com == 1 || ans - com == -2) { printf("승리자: user"); }
		else if (com - ans == 1 || com - ans == -2) { printf("승리자: computer"); }
		else { continue;}
		//차가 1이면
		printf("\n");

	} while (ans == com);

	int ans, input;
	srand((unsigned int)time(NULL));
	ans = rand() % 100 + 1;
	for (int i = 1; i <= 10; i++) {
		printf("1~100 숫자를 입력하세요: ");
		scanf_s("%d", &input);
		while (getchar() != '\n');

		if (input == ans) {break;} //정답이면 10번 반복을 끝내기위해
		else if (input < ans) { printf("UP"); }
		else { printf("DOWN"); }
		printf("\n");

		if (input == ans) { printf("정답입니다.");}
		else {printf("다음 기회에..");}
	}
	*/
	
    /*CONSOLE_CURSOR_INFO CurInfo; // 커서 옵션 구조체
    CurInfo.dwSize = 1;// 커서 크기 (1~100%)
    CurInfo.bVisible = 0; // false
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);//커서 숨기기
    COORD pos = { 0, 0 }; // 콘솔창 시작 좌표*/

	
	int user, com, temp1=0, temp2=0;
    while (1) {
       // SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
        system("cls");
        printf("      ");
        for (int i = 1; i <= 50; i++) { printf("-"); }
        printf("\n");

        srand(time(NULL));
        com = rand() % 6 + 1;
        temp1 += com;
        user = rand() % 6 + 1;
        temp2 += user;

		/*random = rand() % 7;
            printf(" 아무키나 누르세요. [ 주사위 값 : %2d ] \n\n", random);
            if (turn == USER) {
                if (_kbhit()) { // 키보드 입력이 있다면 ( 콘솔에서 입력한 값이 스트림에 저장했다면 )
                    _getch(); // 콘솔에서 입력한 값 가져오기 ( 버리기 )
                    user = (user + random <= 50) ? user + random : 50; //최대로 50까지만,
                    userDice = random; //user차례일 때는 random값을 user에 저장
                    turn = !turn; //com차례로 바꿔주기
                }
            }
            else (turn == COMPUTER) {
            computer = (computer + random <= 50) ? computer + random : 50;
            comDice = random;
            turn = !turn;
        }*/

        printf(" com: ");
        for (int j = 1; j <= temp1; j++) {
            printf("-");
        }
        printf("\nuser: ");
        for (int k = 1; k <= temp2; k++) {
            printf("-");
        }
        printf("\n"); 
        if (temp1 >= 50 || temp2 >= 50) { break; }
        system("pause");
    }
    if (temp1 >= 50) { printf("winner: computer"); }
    else { printf("winner: user"); }


	return 0;
}