#include <stdio.h>
int main() {
    int deci, bin, digit=0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &deci);
    for (int temp = deci; temp != 0; temp >>= 1, digit++);
    printf(" \t\t10진수 : %5d = 2진수 : ", deci);
    //결과 값 출력
    if (digit == 0) printf("0");
    for (int temp = deci; digit--;) {
        if ((temp >> digit) % 2 == 1) printf("1");
        else printf("0");
    }
    printf("\n\n");

    while (1) {
            int decimal = 0, binary = 0;
            printf("[10진수 -> 2진수 변환]\n");
            printf("10진수를 입력하세요. : ");
            scanf_s("%d", &decimal);
            // 10진법 -> 2진법 변환 반복문
            int temp = decimal;
            int div = temp / 2;
            if (temp % 2 == 1) { binary += 1; };
            for (digit = 10; temp; div /= 2, digit *= 10)  //10진수가 0이 아닐때, 10진수를 2로 나눈다, 자릿수를 10씩 곱해준다
                //binary += (temp & 1) * digit;  //10진수를 2로 나눈 몫과 1의 2진수 버전이 모두 1일 때 1, 
            {if (div == 1) { binary += 1 * digit; }; };
            printf(" \t\t\t 10진수 : %5d = 2진수 : %15d\n", decimal, binary);
    }

}