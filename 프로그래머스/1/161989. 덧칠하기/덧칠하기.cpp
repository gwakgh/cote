#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int loc = 0;

    for (auto itr : section) 
    {
        if (loc < itr)
        {
            answer++;
            loc = itr + m - 1;
        }
    }
    return answer;
}