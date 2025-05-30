#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
	for (int a = 0; a < commands.size(); a++) {
		vector<int> temp(array.begin() + commands[a][0] - 1, array.begin() + commands[a][1]);
		sort(temp.begin(), temp.end());
		answer.push_back(temp[commands[a][2] - 1]);
	}
    return answer;
}