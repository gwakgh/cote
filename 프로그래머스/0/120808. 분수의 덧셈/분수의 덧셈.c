#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;
    int* answer = (int*)malloc(1);
    
    int gcd = eucd(numerator, denominator);
    
    answer[0] = numerator / gcd;
    answer[1] = denominator/ gcd;
    return answer;
}
int eucd(int bn, int sn){
    int r = bn % sn;
    if (r == 0){
        return sn;
    }
    else {
        return eucd(sn, r);
    }
}