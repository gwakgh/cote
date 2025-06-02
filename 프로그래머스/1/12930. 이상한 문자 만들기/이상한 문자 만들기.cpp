#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;

    for (char c : s) {
        if(c != ' ') {
            if(index % 2 == 0)	answer.push_back(toupper(c));
            else answer.push_back(tolower(c));
            index++;
        }
        else
        {
            answer.push_back(' ');
            index = 0;
        }
    }
    return answer;
}