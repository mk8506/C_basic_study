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
		printf("����: 1, ����: 2, ��: 3\n���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &ans);
		while (getchar() != '\n');

		srand((unsigned int)time(NULL));

		com = rand() % 3 + 1; //����������
		printf("%d\n", com); //��ǻ��

		if (ans - com == 1 || ans - com == -2) { printf("�¸���: user"); }
		else if (com - ans == 1 || com - ans == -2) { printf("�¸���: computer"); }
		else { continue;}
		//���� 1�̸�
		printf("\n");

	} while (ans == com);

	int ans, input;
	srand((unsigned int)time(NULL));
	ans = rand() % 100 + 1;
	for (int i = 1; i <= 10; i++) {
		printf("1~100 ���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &input);
		while (getchar() != '\n');

		if (input == ans) {break;} //�����̸� 10�� �ݺ��� ����������
		else if (input < ans) { printf("UP"); }
		else { printf("DOWN"); }
		printf("\n");

		if (input == ans) { printf("�����Դϴ�.");}
		else {printf("���� ��ȸ��..");}
	}
	*/
	
    /*CONSOLE_CURSOR_INFO CurInfo; // Ŀ�� �ɼ� ����ü
    CurInfo.dwSize = 1;// Ŀ�� ũ�� (1~100%)
    CurInfo.bVisible = 0; // false
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);//Ŀ�� �����
    COORD pos = { 0, 0 }; // �ܼ�â ���� ��ǥ*/

	
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
            printf(" �ƹ�Ű�� ��������. [ �ֻ��� �� : %2d ] \n\n", random);
            if (turn == USER) {
                if (_kbhit()) { // Ű���� �Է��� �ִٸ� ( �ֿܼ��� �Է��� ���� ��Ʈ���� �����ߴٸ� )
                    _getch(); // �ֿܼ��� �Է��� �� �������� ( ������ )
                    user = (user + random <= 50) ? user + random : 50; //�ִ�� 50������,
                    userDice = random; //user������ ���� random���� user�� ����
                    turn = !turn; //com���ʷ� �ٲ��ֱ�
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