#include <stdio.h>

/*
 * 과제:누진세 계산기
 * 이름:천승민
 * 학번:20235265
 * //AI generated: 단위, 반복
 */

int main() {
     int usage;
     int total_fee = 0;
//값받기
    printf("Enter electricity usage (kWh): ");
    
    if (scanf("%d", &usage) != 1) {     //AI generated
        printf("Error: Invalid input.\n");
        return 1;
    }
//음수일시
    if (usage < 0 || usage > 1000000) {    //AI generated
        printf("Error: Invalid usage range.\n");
        return 1;
    }
//계산
    else if (usage <= 100) { 

        total_fee = usage * 100;
    } 
    else if (usage <= 200) {

        total_fee = (100 * 100) + ((usage - 100) * 200);
    } 
    else {

        total_fee = (100 * 100) + (100 * 200) + ((usage - 200) * 300);
    }
//출력
    if (usage >= 0) {
        printf("Total Fee: %d KRW\n", total_fee);
    }

    return 0;
}
/*
[누진세 계산기 테스트 케이스 표]
번호	입력값 		결과 			선택 이유
1	    150		    20,000 KRW		정상입렵 1
2   	250		    45,000 KRW		정상입력 2
3   	75		    7,500 KRW		정상입력 3
4	    0		    0 KRW			경계값 1
5   	201		    30,300 KRW		경계값 2
6	    100		    10,000 KRW		경계값 3
7	    -10		    Error			이상입력(음수)
8	    2,000,000	Error 			이상입력(큰 수)
*/