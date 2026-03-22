#include <stdio.h>
/*
 * 과제:회로이론(circuit theory)
 * 이름:천승민
 * 학번:20235265
 */

int main() {
    double r1, r2;
    double r_series, r_parallel;

    printf("Enter two resistance values:  "); 
//값을 2개만받기    
    if (scanf("%lf %lf", &r1, &r2) != 2) {  //ai generated code
        printf("Error.\n");
        return 1;
    }

//범위밖값 받지앖기
    if (r1 <= 0 || r2 <= 0) {   //ai generated code
        printf("Error.\n");
        return 1;
    }

 //계산식
    r_series = r1 + r2;
    r_parallel = (r1 * r2) / (r1 + r2);

//결과
    printf("Series Resistance: %.2f ohm\n", r_series);
    printf("Parallel Resistance: %.2f ohm\n", r_parallel);

    return 0;
}