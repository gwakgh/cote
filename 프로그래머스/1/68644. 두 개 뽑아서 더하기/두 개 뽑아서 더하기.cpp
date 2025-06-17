#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            int n = numbers[i] + numbers[j];
            if (find(answer.begin(), answer.end(), n) != answer.end())  continue;
            else    answer.push_back(n);
		}
        
    }
	sort(answer.begin(), answer.end());

    return answer;
}