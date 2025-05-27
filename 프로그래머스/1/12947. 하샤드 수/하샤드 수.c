#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int y = x;
    int num = 0;

    while (1) {
        if (y / 10 > 0) {
            num += y % 10;
            y /= 10;
        }
        else {
            num += y;
            break;
        }
    }
    
    if(x % num != 0)    answer = false;
    
    return answer;
}