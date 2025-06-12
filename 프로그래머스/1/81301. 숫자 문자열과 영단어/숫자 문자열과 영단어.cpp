#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    map<string, string> numbers = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
        {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
    };

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        string spell = it->first;
        string digit = it->second;

        int pos = s.find(spell);
        while (pos != string::npos) {
            s.replace(pos, spell.length(), digit);
            pos = s.find(spell, pos + digit.length());
        }
    }

    return stoi(s);
}