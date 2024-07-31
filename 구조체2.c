//#include <stdio.h>
//typedef struct point {
//	int xpos;
//	int ypos;
//}point; //x, y��ǥ�� ǥ���ϴ� ����ü
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
//}// ������� ������ ������ �޸� �ּ� result 
//
//
//int main(void) {
//	point first, second, result;
//	printf("ù��° x, y��ǥ�� �Է��� �ּ��� : ");
//	scanf_s("%d %d", &first.xpos, &first.ypos);
//	printf("�ι�° x, y��ǥ�� �Է��� �ּ��� : ");
//	scanf_s("%d %d", &second.xpos, &second.ypos);
//	//result = PointAdd(first, second);
//	PointAdd2(&result, first, second);   //first�� x, y second�� x, y
//	printf("ù��°�� �ι�° ��ǥ�� ���� �� : %d  %d \n\n", result.xpos, result.ypos);
//}

#include <stdio.h> // main.c
#include <stdlib.h> //system(), exit()
#include <string.h> //strcmp()

#define MAX 10

typedef struct _book {
    int no; // å �Ϸù�ȣ
    char title[30];     //������
    char author[20];    //�۰�
    int price;          //����
    int cnt;            //����
    int sale;           //�����(���� * ����)
} BOOK;

//BOOK* pBook : ����ü �迭�� ���� �ּ� , int size : �迭�� ��ü ĭ ��
void input(BOOK* pBook, int size);  //�Է��Լ�
void output(BOOK* pBook, int size); //����Լ�
void sort(BOOK* pBook, int size);   //�����Լ� ������ a~z ����
void search(BOOK* pBook, int size); //�˻��Լ�

int main() {
    int n;
    BOOK books[MAX] = {
      {1,"�޷���Ʈ �� ��ȭ��","�̹̿�",13800,50,13800 * 50 },
      {2,"WEALTHINKING","�̸� ��",14400,34,14400 * 34 },
      {3,"����","Ȳ��",16200,84,16200 * 84 },
      {4,"��","õ���",15000,46,15000 * 46 },
      {5,"������ �ִ� ��","������",13800,26,13800 * 26 },
      {6,"���� ��ȭ��","Mr.lwi",25200,84,25200 * 84 },
      {7,"GOOD THINK","�赿��",13500,48,13500 * 48 },
      {8,"�Һ��� ��Ģ","��� �Ͽ���",22500,45,22500 * 45 },
      {9,"AI �ΰ����� �ô�","����",16500,94,16500 * 94 },
      {10,"������ ���� ��ż","Ȳ����",11700,27,11700 * 27 },
    };
    while (1) {//���ѷ��� == for(;;)
        system("cls");//ȭ�� �����
        printf("\n *** �������� �޴� ***\n\n");
        printf("  1. �Է�\n");
        printf("  2. ���\n");
        printf("  3. ����\n");
        printf("  4. �˻�\n");
        printf("  5. ����\n\n");
        printf("  �Է� ( 1 ~ 5 ) : ");
        scanf_s("%d", &n);
        while (getchar() != '\n');
        switch (n) {
        case 1:  input(books, MAX); break;
        case 2:  output(books, MAX); break;
        case 3:  sort(books, MAX); break;
        case 4:  search(books, MAX);  break;
        case 5:  printf("\n\n\t\t���α׷��� �����մϴ�.\n"); exit(0); //���α׷� ����
        default: printf("  �ٽ� �Է��ϼ���. \n  ");
        }//end switch
        printf("\n\n\t\t�޴��� ���ư��ϴ�.\n\t\t");
        system("pause"); // ��� ����
    }//end while
    return 0;
}//end main

//BOOK* pBook : ����ü �迭�� ���� �ּ� , int size : �迭�� ��ü ĭ ��
void input(BOOK* pBook, int size) {
    for (int i = 0; i < size; i++) {
                 system("cls");
                printf("���� �ڵ� : ");
                scanf_s("%d", &pBook[i].no);
                while (getchar() != '\n');
                printf("������ : ");
                gets_s(pBook[i].title, (int)sizeof(pBook[i].title));// ���ڿ� �Է� (���鹮�� ����)
                printf("��  �� : ");
                gets_s(pBook[i].author, (int)sizeof(pBook[i].author));// ���ڿ� �Է� (���鹮�� ����)
                printf("��  �� : ");
                scanf_s("%d", &pBook[i].price);
                printf("��  �� : ");
                scanf_s("%d", &pBook[i].cnt);
                pBook[i].sale = pBook[i].price * pBook[i].cnt;
    }
}

void output(BOOK* pBook, int size) {  //size�� MAX  //�迭 ���鼭 ����� �� ������ָ��
    system("cls");
    printf("%5s %27s %20s %7s %5s %8s\n", "��ȣ", "������", "�۰�", "����", "����", "�����");
    for (int i = 0; i < size; i++) {
        printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
    }
}

void sort(BOOK* pBook, int size) {
    system("cls");
    for (int i = 0; i < size - 1; i++) {
                for (int j = i + 1; j < size; j++) {  //i���� �ϳ� �� ū ������
                    if (strcmp(pBook[i].title, pBook[j].title) == 1) {  //�ƽ�Ű�� ������ �� ũ��
                        BOOK temp = pBook[i]; //�ٲ��ش�
                        pBook[i] = pBook[j];
                        pBook[j] = temp;
                    }
                }
    }
}
    //�����Լ� ������ a~z ����

void search(BOOK* pBook, int size) {
    char sch[30];
    system("cls");
    printf("\n\n�˻��ϼ��� : ");
    gets_s(sch, (int)sizeof(sch));  //���� ����
    for (int i = 0; i < size; i++) {
        if (strstr(sch, pBook[i].title) != 0) {  //�� ��°�� ù ��°�� ������ ������ ��ȯ, ������ 0, �ι�°�� 0�̸� ù��°
            printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
        }
    }
}


//void input(BOOK* pBook, int size) {
//    for (int i = 0; i < size; i++) {
//        system("cls");
//        printf("\n\n*** ���� ���� �Է� ***\n\n");
//        printf("���� �ڵ� ��ȣ �Է� : ");
//        scanf_s("%d", &pBook[i].no);
//        while (getchar() != '\n');
//        printf("������ : ");
//        gets_s(pBook[i].title, (int)sizeof(pBook[i].title));// ���ڿ� �Է� (���鹮�� ����)
//        printf("��  �� : ");
//        gets_s(pBook[i].author, (int)sizeof(pBook[i].author));// ���ڿ� �Է� (���鹮�� ����)
//        printf("��  �� : ");
//        scanf_s("%d", &pBook[i].price);
//        printf("��  �� : ");
//        scanf_s("%d", &pBook[i].cnt);
//        pBook[i].sale = pBook[i].price * pBook[i].cnt;   //����� = ���� * ����
//    }
//}//end input
//
//void output(BOOK* pBook, int size) {
//    system("cls");
//    printf("\n\n\t\t\t *** ���� ���� ��� ***\n\n");
//    printf("%5s %27s %20s %7s %5s %8s\n", "��ȣ", "������", "�۰�", "����", "����", "�����");
//    printf("----------------------------------------------------------------------------\n");
//    for (int i = 0; i < size; i++) {
//        printf("  %03d %27s %20s %7d %5d %8d\n", pBook[i].no, pBook[i].title, pBook[i].author, pBook[i].price, pBook[i].cnt, pBook[i].sale);
//    }
//}//end output
//
//void sort(BOOK* pBook, int size) {
//    // BOOK* pBook : Books �迭 �̸�(�迭�� ���� �ּ�)
//    // int size  : Books �迭 ĭ��
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
////void sort(BOOK* pBook, int size) { // �׸� �� ����
////  int sel = 0;
////  printf("���� �׸��� ���� �ϼ���.\n");
////  printf("1. å �Ϸù�ȣ\n");
////  printf("2. ������\n");
////  printf("3. �۰���\n");
////  printf("4. ����\n");
////  printf("5. ����\n");
////  printf("6. �����\n");
////  printf(" �Է��ϼ���. : ");
////  scanf_s("%d", &sel);
////#define swap(type,a,b) {type temp = a; a = b; b = temp;}
////  for (int i = 0; i < size - 1; i++) { //�������� ��������
////    for (int j = i + 1; j < size; j++) {//�ּҰ� ã��
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
////  printf("\n\n\t\t�������� ���� �Ϸ�!!\n");
////}//end sort
//
//void search(BOOK* pBook, int size) {
//    char sch[30];
//    printf("ã������ å �̸��� �����ּ���. :");
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
//    printf("ã���ô� å�� �����ϴ�.!\n");
//
//}//end search
//
////void search(BOOK* pBook, int size) { // �ܾ�� å �˻�
////  int find = 0;
////  char str[30];
////  system("cls");
////  printf("\n\n�˻� ������ �Է� : ");
////  gets_s(str, (int)sizeof(str));
////  printf("\n\n\t\t\t*** ���� �˻� ���� ��� ***\n\n");
////  printf("%5s %27s %20s %7s %5s %8s\n", "��ȣ", "������", "�۰�", "����", "����", "�����");
////  printf(" ---------------------------------------------------------------------------- \n");
////  for (int i = 0; i < size; i++) {
////    if (strstr(pBook[i].title, str) != 0) {//�������� ��ġ�Ѵٸ�
////      printf("  %03d %27s %20s %7d %5d %8d\n"
////        , pBook[i].no, pBook[i].title, pBook[i].author
////        , pBook[i].price, pBook[i].cnt, pBook[i].sale);
////      find++;
////    }
////  }
////  if (!find) printf("\n\n\t\t�˻� ������ �������� �ʽ��ϴ�.\n");
////}//end search
