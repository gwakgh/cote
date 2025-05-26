#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
   
    while(1) {
        if(n / 10 > 0) {
            answer += (n % 10);
            n /= 10;
        }
        else {
            answer += n;
            break;
        }
    }
    
    return answer;
}