#include <stdio.h>
int main() {
    int deci, bin, digit=0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &deci);
    for (int temp = deci; temp != 0; temp >>= 1, digit++);
    printf(" \t\t10���� : %5d = 2���� : ", deci);
    //��� �� ���
    if (digit == 0) printf("0");
    for (int temp = deci; digit--;) {
        if ((temp >> digit) % 2 == 1) printf("1");
        else printf("0");
    }
    printf("\n\n");

    while (1) {
            int decimal = 0, binary = 0;
            printf("[10���� -> 2���� ��ȯ]\n");
            printf("10������ �Է��ϼ���. : ");
            scanf_s("%d", &decimal);
            // 10���� -> 2���� ��ȯ �ݺ���
            int temp = decimal;
            int div = temp / 2;
            if (temp % 2 == 1) { binary += 1; };
            for (digit = 10; temp; div /= 2, digit *= 10)  //10������ 0�� �ƴҶ�, 10������ 2�� ������, �ڸ����� 10�� �����ش�
                //binary += (temp & 1) * digit;  //10������ 2�� ���� ��� 1�� 2���� ������ ��� 1�� �� 1, 
            {if (div == 1) { binary += 1 * digit; }; };
            printf(" \t\t\t 10���� : %5d = 2���� : %15d\n", decimal, binary);
    }

}