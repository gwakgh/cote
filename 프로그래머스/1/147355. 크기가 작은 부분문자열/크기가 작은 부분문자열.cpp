#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(string t, string p) {
    int answer = 0, index = 0;
    int size = p.size();

    while (1) {
		t.substr(index++, size) <= p ? answer++ : answer;
        if (index + size > t.size())    break;
    }
    
    return answer;
}