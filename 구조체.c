#include <stdio.h>
#include <string.h>
/*
struct student {
	int  no; // 학번 멤버 변수
	char name[20]; // 이름 멤버 변수
	int  age; // 나이 멤버 변수
	char phone[20]; // 전화번호 멤버 변수
};
int main() {
	struct student st1, st2, st3;
	//구조체 변수 선언
	st1.no = 1;
	strcpy_s(st1.name, sizeof(st1.name), "James Robert");
	//st1.name = "James Robert"; 에러!
	st1.age = 35;
	strcpy_s(st1.phone, sizeof(st1.phone), "010-1234-5678");

	st2.no = 2;
	strcpy_s(st2.name, sizeof(st2.name), "William Michael");
	st2.age = 24;
	strcpy_s(st2.phone, sizeof(st2.phone), "010-5678-1234");

	st3.no = 3;
	strcpy_s(st3.name, sizeof(st3.name), "Joshua David");
	st3.age = 20;
	strcpy_s(st3.phone, sizeof(st3.phone), "010-4321-8765");
	printf("%5d  %20s %4d %20s\n", st1.no, st1.name, st1.age, st1.phone);
	printf("%5d  %20s %4d %20s\n", st2.no, st2.name, st2.age, st2.phone);
	printf("%5d  %20s %4d %20s\n", st3.no, st3.name, st3.age, st3.phone);
	return 0;
}
*/

#include <stdlib.h>
#define MAX 50
#define swap(type,a,b) {type t=a;a=b;b=t;}


typedef struct student {
	int no; // 학번
	//int score[4];
	int kor; // 국어
	int math;// 수학
	int eng; // 영어
	int selection; // 선택과목
} STU;
//입력 받은 과목 성적 순위 정렬
//결과 출력(번호 : 오름차순, 성적 : 내림차순)

typedef enum subject {
	no, kor, math, eng, selection
} SUBJECT;

int main() {
	

	SUBJECT sub;
	STU st[MAX];   //배열 만들기
	for (int i = 0; i < MAX; i++) {
		st[i].no = i + 1;
		/*
		for (int j = 0; j < 4; j++) {
			st[i].score[i] = rand() % 41 + 60;
		}*/
		st[i].kor = rand() % 41 + 60;
		st[i].math = rand() % 41 + 60;
		st[i].eng = rand() % 41 + 60;
		st[i].selection = rand() % 41 + 60;

	}	

	int menu = 0;
	printf("고르시오: ");
	scanf_s("%d", &menu);

	for (int i = 0; i < MAX-1; i++) {
		int small = i;
		for (int j = i; j < MAX; j++) {
			switch (menu) {
				case no: if (st[small].no > st[j].no) small = j; break;
				case kor: if (st[small].kor < st[j].kor) small = j; break;
				case math: if (st[small].math < st[j].math) small = j; break;
				case eng: if (st[small].eng < st[j].eng) small = j; break;
				case selection: if (st[small].selection < st[j].selection) small = j; break;
			}
		}
		swap(STU, st[i], st[small]);
	}

	/*
	int small;
	for (int i = 0; i < MAX; i++) {
		small = i;
		for (int j = i; j < MAX; j++) {
			//if (st[i].no > st[j].no) swap(int, st[i].no, st[j].no);
			if (st[small].no > st[j].no) small = j;   //여기만 no 있으니까 이 것만 case문 안으로
		}
		swap(STU, st[i], st[small]);
	}
	*/


	for (int i = 0; i < MAX; i++) {
		printf("\t%3d. 국어 : %4d \t 수학 : %4d \t 영어 : %4d \t 선택 : %4d \n",
			st[i].no, st[i].kor, st[i].math, st[i].eng, st[i].selection);
	}

    return 0;

}


