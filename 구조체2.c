//#include <stdio.h>
//typedef struct point {
//	int xpos;
//	int ypos;
//}point; //x, y좌표를 표현하는 구조체
//
////point PointAdd(point a, point b) {
////	point result;
////	result.xpos = a.xpos + b.xpos;
////	result.ypos = a.ypos + b.ypos;
////	return result;
////}
//
//void PointAdd2(point* result, point a, point b) {
//	(*result).xpos = a.xpos + b.xpos;
//	result->ypos = a.ypos + b.ypos;
//}// 결과값을 저장할 변수의 메모리 주소 result 
//
//
//int main(void) {
//	point first, second, result;
//	printf("첫번째 x, y좌표를 입력해 주세요 : ");
//	scanf_s("%d %d", &first.xpos, &first.ypos);
//	printf("두번째 x, y좌표를 입력해 주세요 : ");
//	scanf_s("%d %d", &second.xpos, &second.ypos);
//	//result = PointAdd(first, second);
//	PointAdd2(&result, first, second);   //first의 x, y second의 x, y
//	printf("첫번째와 두번째 좌표를 더한 값 : %d  %d \n\n", result.xpos, result.ypos);
//}

#include <stdio.h> // main.c
#include <stdlib.h> //system(), exit()
#include <string.h> //strcmp()

#define MAX 10

typedef struct _book {
    int no; // 책 일련번호
    char title[30];     //도서명
    char author[20];    //작가
    int price;          //가격
    int cnt;            //수량
    int sale;           //매출액(가격 * 수량)
} BOOK;

//BOOK* pBook : 구조체 배열의 시작 주소 , int size : 배열의 전체 칸 수
void input(BOOK* pBook, int size);  //입력함수
void output(BOOK* pBook, int size); //출력함수
void sort(BOOK* pBook, int size);   //정렬함수 도서명 a~z 순서
void search(BOOK* pBook, int size); //검색함수

int main() {
    int n;
    BOOK books[MAX] = {
      {1,"달러구트 꿈 백화점","이미예",13800,50,13800 * 50 },
      {2,"WEALTHINKING","켈리 최",14400,34,14400 * 34 },
      {3,"몰입","황농문",16200,84,16200 * 84 },
      {4,"고래","천명관",15000,46,15000 * 46 },
      {5,"마당이 있는 집","김진영",13800,26,13800 * 26 },
      {6,"동요 백화점","Mr.lwi",25200,84,25200 * 84 },
      {7,"GOOD THINK","김동석",13500,48,13500 * 48 },
      {8,"불변의 법칙","모건 하우절",22500,45,22500 * 45 },
      {9,"AI 인간지능 시대","김상균",16500,94,16500 * 94 },
      {10,"마당을 나온 암탉","황선미",11700,27,11700 * 27 },
    };
    while (1) {//무한루프 == for(;;)
        system("cls");//화면 지우기
        printf("\n *** 도서관리 메뉴 ***\n\n");
        printf("  1. 입력\n");
        printf("  2. 출력\n");
        printf("  3. 정렬\n");
        printf("  4. 검색\n");
        printf("  5. 종료\n\n");
        printf("  입력 ( 1 ~ 5 ) : ");
        scanf_s("%d", &n);
        while (getchar() != '\n');
        switch (n) {
        case 1:  input(books, MAX); break;
        case 2:  output(books, MAX); break;
        case 3:  sort(books, MAX); break;
        case 4:  search(books, MAX);  break;
        case 5:  printf("\n\n\t\t프로그램을 종료합니다.\n"); exit(0); //프로그램 종료
        default: printf("  다시 입력하세요. \n  ");
        }//end switch
        printf("\n\n\t\t메뉴로 돌아갑니다.\n\t\t");
        system("pause"); // 대기 목적
    }//end while
    return 0;
}//end main

//BOOK* pBook : 구조체 배열의 시작 주소 , int size : 배열의 전체 칸 수
void input(BOOK* pBook, int size) {
    for (int i = 0; i < size; i++) {
                 system("cls");
                printf("도서 코드 : ");
                scanf_s("%d", &pBook[i].no);
                while (getchar() != '\n');
                printf("도서명 : ");
                gets_s(pBook[i].title, (int)sizeof(pBook[i].title));// 문자열 입력 (공백문자 포함)
                printf("작  가 : ");
                gets_s(pBook[i].author, (int)sizeof(pBook[i].author));// 문자열 입력 (공백문자 포함)
                printf("가  격 : ");
                scanf_s("%d", &pBook[i].price);
                printf("수  량 : ");
                scanf_s("%d", &pBook[i].cnt);
                pBook[i].sale = pBook[i].price * pBook[i].cnt;
    }
}

void output(BOOK* pBook, int size) {  //size는 MAX  //배열 돌면서 멤버들 다 출력해주면됨
    system("cls");
    printf("%5s %27s %20s %7s %5s %8s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
    for (int i = 0; i < size; i++) {
        printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
    }
}

void sort(BOOK* pBook, int size) {
    system("cls");
    for (int i = 0; i < size - 1; i++) {
                for (int j = i + 1; j < size; j++) {  //i보다 하나 더 큰 값부터
                    if (strcmp(pBook[i].title, pBook[j].title) == 1) {  //아스키가 왼쪽이 더 크면
                        BOOK temp = pBook[i]; //바꿔준다
                        pBook[i] = pBook[j];
                        pBook[j] = temp;
                    }
                }
    }
}
    //정렬함수 도서명 a~z 순서

void search(BOOK* pBook, int size) {
    char sch[30];
    system("cls");
    printf("\n\n검색하세요 : ");
    gets_s(sch, (int)sizeof(sch));  //띄어쓰기 포함
    for (int i = 0; i < size; i++) {
        if (strstr(sch, pBook[i].title) != 0) {  //두 번째가 첫 번째에 있으면 포인터 반환, 없으면 0, 두번째가 0이면 첫번째
            printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
        }
    }
}


//void input(BOOK* pBook, int size) {
//    for (int i = 0; i < size; i++) {
//        system("cls");
//        printf("\n\n*** 도서 정보 입력 ***\n\n");
//        printf("도서 코드 번호 입력 : ");
//        scanf_s("%d", &pBook[i].no);
//        while (getchar() != '\n');
//        printf("도서명 : ");
//        gets_s(pBook[i].title, (int)sizeof(pBook[i].title));// 문자열 입력 (공백문자 포함)
//        printf("작  가 : ");
//        gets_s(pBook[i].author, (int)sizeof(pBook[i].author));// 문자열 입력 (공백문자 포함)
//        printf("가  격 : ");
//        scanf_s("%d", &pBook[i].price);
//        printf("수  량 : ");
//        scanf_s("%d", &pBook[i].cnt);
//        pBook[i].sale = pBook[i].price * pBook[i].cnt;   //매출액 = 가격 * 수량
//    }
//}//end input
//
//void output(BOOK* pBook, int size) {
//    system("cls");
//    printf("\n\n\t\t\t *** 도서 정보 출력 ***\n\n");
//    printf("%5s %27s %20s %7s %5s %8s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
//    printf("----------------------------------------------------------------------------\n");
//    for (int i = 0; i < size; i++) {
//        printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
//    }
//}//end output
//
//void sort(BOOK* pBook, int size) {
//    // BOOK* pBook : Books 배열 이름(배열의 시작 주소)
//    // int size  : Books 배열 칸수
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (strcmp(pBook[i].title, pBook[j].title) == 1) {
//                BOOK temp = pBook[i];
//                pBook[i] = pBook[j];
//                pBook[j] = temp;
//            }
//        }
//    }
//}//end sort
//
////void sort(BOOK* pBook, int size) { // 항목 별 정렬
////  int sel = 0;
////  printf("정렬 항목을 선택 하세요.\n");
////  printf("1. 책 일련번호\n");
////  printf("2. 도서명\n");
////  printf("3. 작가명\n");
////  printf("4. 가격\n");
////  printf("5. 수량\n");
////  printf("6. 매출액\n");
////  printf(" 입력하세요. : ");
////  scanf_s("%d", &sel);
////#define swap(type,a,b) {type temp = a; a = b; b = temp;}
////  for (int i = 0; i < size - 1; i++) { //순차정렬 오름차순
////    for (int j = i + 1; j < size; j++) {//최소값 찾기
////      switch (sel)
////      {
////      case 1:if (pBook[i].no > pBook[j].no) swap(BOOK, pBook[i], pBook[j]); break;
////      case 2:if (strcmp(pBook[i].title, pBook[j].title) > 0) swap(BOOK, pBook[i], pBook[j]); break;
////      case 3:if (strcmp(pBook[i].author, pBook[j].author) > 0) swap(BOOK, pBook[i], pBook[j]); break;
////      case 4:if (pBook[i].price > pBook[j].price) swap(BOOK, pBook[i], pBook[j]); break;
////      case 5:if (pBook[i].cnt > pBook[j].cnt) swap(BOOK, pBook[i], pBook[j]); break;
////      case 6:if (pBook[i].sale > pBook[j].sale) swap(BOOK, pBook[i], pBook[j]); break;
////      }
////    }
////  }
////  printf("\n\n\t\t오름차순 정렬 완료!!\n");
////}//end sort
//
//void search(BOOK* pBook, int size) {
//    char sch[30];
//    printf("찾으려는 책 이름을 적어주세요. :");
//    gets_s(sch, sizeof(sch));
//
//    for (int i = 0; i < size; i++) {
//        if (strcmp(pBook[i].title, sch) == 0) {
//            printf("  %03d %27s %20s %7d %5d %8d\n"
//                , pBook[i].no, pBook[i].title, pBook[i].author
//                , pBook[i].price, pBook[i].cnt, pBook[i].sale);
//            return;
//        }
//    }
//    printf("찾으시는 책이 없습니다.!\n");
//
//}//end search
//
////void search(BOOK* pBook, int size) { // 단어로 책 검색
////  int find = 0;
////  char str[30];
////  system("cls");
////  printf("\n\n검색 도서명 입력 : ");
////  gets_s(str, (int)sizeof(str));
////  printf("\n\n\t\t\t*** 도서 검색 정보 출력 ***\n\n");
////  printf("%5s %27s %20s %7s %5s %8s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
////  printf(" ---------------------------------------------------------------------------- \n");
////  for (int i = 0; i < size; i++) {
////    if (strstr(pBook[i].title, str) != 0) {//도서명이 일치한다면
////      printf("  %03d %27s %20s %7d %5d %8d\n"
////        , pBook[i].no, pBook[i].title, pBook[i].author
////        , pBook[i].price, pBook[i].cnt, pBook[i].sale);
////      find++;
////    }
////  }
////  if (!find) printf("\n\n\t\t검색 도서가 존재하지 않습니다.\n");
////}//end search
