#include <stdio.h>

int main(){
    float score;
    
    printf("input score: ");
    scanf("%f", &score);

    if(score > 100 || score < 0){
        printf("wrong input");
        return 0;
    }
    if(score>=90)
        printf("A");
    else if(score>=80)
        printf("B");
    else if(score>=70)
        printf("C");
    else if(score>=60)
        printf("D");
    else
        printf("F");
    
    return 0;
}