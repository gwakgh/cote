#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer = { 0, 6 };
	int zero_count = count(lottos.begin(), lottos.end(), 0);
	int match_count = 0;

    for (int i = 0; i < lottos.size(); i++) 
    {
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) 
        {
            match_count++;
        }
	}
    answer[0] = 7 - (match_count + zero_count);
    answer[1] = 7 - match_count;

    if (answer[0] > 6) answer[0] = 6;
    if (answer[1] > 6) answer[1] = 6;

    return answer;
}