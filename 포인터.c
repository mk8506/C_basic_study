//#include <stdio.h>
//int main() {
//		int a[5] = { 10, 20, 30, 40, 50 }, * p = a;
//		//배열 이름은 배열의 시작주소 값이다.
//		printf("1. %p\n", a);//a[0]의 첫 주소값
//		printf("2. %d\n", *p);//10
//		printf("3. %d\n", *(p + 1));//20
//		printf("4. %d\n", p[2]);//30
//		printf("5. %d\n\n", *(a + 3));//==*(p+3)== 40
//
//		p += 1; // p = p + 1    
//		//a += 2; 배열 이름은 상수 포인터로 변경 불가능
//		printf("6. %p\n", p);//a[1]의 주소값
//		printf("7. %d\n", *(p - 1));//10
//		printf("8. %d\n", p[0]);//20
//		printf("9. %d\n", *(p + 1));//30
//		printf("10. %d\n", a[3]);//40
//		printf("11. %d\n", p[3]);//50
//		printf("12. %d\n", p[-1]);//10
//		printf("13. %d\n", *p + 2);//22
//}
//
//
//#include <stdio.h>
//int main() {
//    int a[] = { 10, 20, 30, 40, 50, 60 };
//
//    for (int* ptr = a, i = 0; i < 5; i++)
//        printf("%d ", *(ptr++)); //*ptr & ptr++ 결합된 형태
//    printf("\n");//10 20 30 40 50
//
//    for (int* ptr = a, i = 0; i < 5; i++)
//        printf("%d ", *(++ptr)); //++ptr & *ptr 결합된 형태
//    printf("\n");//20 30 40 50 60
//
//    for (int* ptr = a, i = 0; i < 5; i++)
//        printf("%d ", ++ * (ptr++)); //++a[i]과 같은 형태
//    printf("\n");//11 21 31 41 51 
//
//    for (int* ptr = a, i = 0; i < 5; i++)
//        printf("%d ", (*(ptr++))++); // a[i]++와 같은 형태
//    printf("\n"); //11 21 31 41 51   //후위연산은 printf까지 끝내고.
//
//    for (int i = 0; i < 6; i++) printf("%d ", a[i]); //배열 최종 값 확인  
//    printf("\n");//12 22 32 42 52 60 //위의 후위연산이 포함된 값. ++는 +=1과 같음
//}


#include <stdio.h>
int main() {//    p        q
    int a[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }, * p = a, * q = &a[3],
        b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    float c[10] = { 1.5, 5.5, 9.5, 13.5, 17.5, 21.5, 25.5, 29.5, 33.5, 37.5 };
    float* fp = c;//fp
    printf("■ %8d , %8d , %13d , %8d \n\n", *a, *(++p), *(p + 2), *(++q));//3 3 7 9 
    printf("■ %8.2f , %8.2f , %13.2f , %8.2f \n\n", *c, fp[1], *fp + 2, *(fp + 3));//1.5  5.5  3.5  13.5 
    printf("■ %8d , %8d , %13d , %8d \n\n", *p + 3, *(p + 3), *q - 2, *(q - 2));//6 9 7 5
    printf("■ %8d , %8d , %13d , %8d \n\n", *a + 2, *(a + 2), *(p - 5), *(q + 13));//3 5 ?? ??
    printf("■ p : %p | q = %p \n\n", p, q);//a[1]의 주소, a[4]의 주소
    printf("■ p - q : %12lld | q - p = %12lld \n\n", p - q, q - p); // p + q 연산 불가, -3 3

    if (q > p + 2) // q - p = 3 , 주소값 12 차이 = 3칸 * 4(int)
        printf("■ q : %p | p : %p\t참\n\n", q, p + 2);//p가 a[1]의 주소, p+2는 a[3]의 주소 -> q와 int니까 4차이.
    else
        printf("■ q : %p | p : %p\t거짓\n\n", q, p + 3);

    q = 0;    p = NULL;
    printf("■ p : %p | q = %p \n\n", p, q);//
    //p = a;    fp = c;
    //for (int i = -5; i < 20; i++) {
    //if (i < 0) printf("  p %-3d 값 : %d \n", i, *(p + i));
    //else printf("  p +%-2d 값 : %d \n", i, *(p + i));
    //}
}
