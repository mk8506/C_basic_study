#include <stdio.h>
int main() {
   /* char c;
    printf("f, e, h �޴� �ڵ带 �Է��ϼ��� :  ");
    scanf_s("%c", &c, 1);
    switch (c) //������ �����͸�. -> case�� ��ġ, �ƽ�Ű��
    {
    case 'F': //��ø�� ���ϱ�
    case 'f': printf("file menu\n"); break;
    case 'E':
    case 'e': printf("edit menu\n"); break;
    case 'H':
    case 'h': printf("help menu\n"); break;
    default: printf("error");};
    

    int score;
    char grade;
    printf("������ �Է��Ͻÿ�");
    scanf_s("%d", &score);
    switch (score / 10) //�� Ȱ���ϴ� ��� �̿��ϱ�
    {
    case  10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F'; // ������ char�̾ ������ ���� ����ǥ
    };
    printf("%c���", grade);

    int first, secondLength, secondTemp;
    printf("1. ��ġ <-> ��Ƽ\n2. ȭ�� <-> ����\n�޴��� �Է��ϼ��� ");
    scanf_s("%d", &first);
    switch (first)
    {
    case 1:
        printf("(1)��ġ -> ��Ƽ\n(2)��Ƽ -> ��ġ\n�޴��� �Է��ϼ��� ");
        scanf_s("%d", &secondLength); break;
    case 2:
        printf("(1)ȭ�� -> ����\n(2)���� -> ȭ��\n�޴��� �Է��ϼ��� ");
        scanf_s("%d", &secondTemp); break;
    };
    float num;
    float num2;
    switch (secondLength)
    {
    case 1:
        printf("��ġ�� �Է��ϼ���");
        scanf_s("%f", &num); //%f float
        num2 = num * 2.54; 
        printf("%.3f cm", num2); break;
    case 2:
        printf("end"); break;
    //~~~~
    }; //~~~~
    */

    for (int i = 10; i; i--) { //i�� 0�� �ƴҶ�����. 0�̸� ����.
        printf("%d ", i);
    }
    printf("\n");
    

    return 0;

}