#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m, n;
    int a = 1;
    printf("양의 정수 m과 n(m<=n)을 입력하면 m과 같거나 크고 n보다 ");
    printf("작은 수 중에서 소수를 모두 출력하는 프로그램입니다");
    printf("\nm에 해당하는 정수를 입력하세요==>");
    scanf("%d", &m);
    printf("\nn에 해당하는 정수를 입력하세요==>");
    scanf("%d", &n);
    while (m <= n) {
        if (a == 1) {
            if (m == 1) {
                m++;
                if (m == 2) {
                    printf("%d", m);
                }
            }
            else {
                a++;
            }
        }
        else if (m == 2) {
            printf("%d", m);
        }
        else if ((a != 1) && ((m % a) != 0)) {
            a++;
            if (m == a) {
                printf("%d,", m);
                m++;
                a = 1;
            }
        }
        else if ((a != 1) && ((m % a) == 0)) {
            m++;
            a = 1;
        }
        else if (m == n) {
            break;
        }
    }
    return 0;
}