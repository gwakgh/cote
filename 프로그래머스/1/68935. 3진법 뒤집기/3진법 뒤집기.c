#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, index = 0;
    int arr[17] = { 0 };

    while (n > 0) {
        arr[index++] = n % 3;
        n /= 3;
    }

    for (int i = 0; i < index; i++) {
        answer += arr[i] * pow(3, index - i - 1);
    }
    return answer;
}