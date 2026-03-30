/*
    * multiplication_table_for.c
    *  학번: 20235265
    *  이름: 천승민
*/

#include  <stdio.h>

int main() {
    int a, b,c,d;
    printf("multiplication table for\n");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("error: a > b \n");
        return 0;
    }
    if (a<1 || b>9)
    {
        printf("error: a < 1 || b > 9 \n");
        return 0;
    }
    scanf("%d %d", &c, &d);
    if(c>d){
        printf("error: c > d \n");
        return 0;
    }
    if (c<1 || d>12)
    {
        printf("error: c < 1 || d > 12 \n");
        return 0;
    }

    for(int i=a; i<=b; i++){
        for(int j=c; j<=d; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
        return 0;
}