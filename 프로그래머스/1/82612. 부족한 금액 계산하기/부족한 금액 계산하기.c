#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    
   for(int i = 1; i <= count; i++)  answer += (long long)price * (long long)i;
    answer -= money;
    return answer ? answer : 0;
}