#include  <stdio.h>
// 피보나치 수열을 출력하는 프로그램
int main() {
    int i,a=0,b=1,n,c = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        c = c + a;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}