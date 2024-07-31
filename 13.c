#include <stdio.h>
int main() {
   char c;
    printf("f, e, h 메뉴 코드를 입력하세요 :  ");
    scanf_s("%c", &c, 1);
    switch (c) //정수형 데이터만. -> case와 일치, 아스키값
    {
    case 'F': //중첩은 피하기
    case 'f': printf("file menu\n"); break;
    case 'E':
    case 'e': printf("edit menu\n"); break;
    case 'H':
    case 'h': printf("help menu\n"); break;
    default: printf("error");};
    

    int score;
    char grade;
    printf("점수를 입력하시오");
    scanf_s("%d", &score);
    switch (score / 10) //몫만 활용하는 방법 이용하기
    {
    case  10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F'; // 변수가 char이어도 저장은 작은 따옴표
    };
    printf("%c등급", grade);

    int first, secondLength, secondTemp;
    printf("1. 인치 <-> 센티\n2. 화씨 <-> 섭씨\n메뉴를 입력하세요 ");
    scanf_s("%d", &first);
    switch (first)
    {
    case 1:
        printf("(1)인치 -> 센티\n(2)센티 -> 인치\n메뉴를 입력하세요 ");
        scanf_s("%d", &secondLength); break;
    case 2:
        printf("(1)화씨 -> 섭씨\n(2)섭씨 -> 화씨\n메뉴를 입력하세요 ");
        scanf_s("%d", &secondTemp); break;
    };
    float num;
    float num2;
    switch (secondLength)
    {
    case 1:
        printf("인치를 입력하세요");
        scanf_s("%f", &num); //%f float
        num2 = num * 2.54; 
        printf("%.3f cm", num2); break;
    case 2:
        printf("end"); break;
    //~~~~
    }; //~~~~

    for (int i = 10; i; i--) { //i가 0이 아닐때까지. 0이면 거짓.
        printf("%d ", i);
    }
    printf("\n");
    

    return 0;

}
