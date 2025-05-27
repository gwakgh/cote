#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> nums;
    
    while(1) {
        if (n / 10 > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }
        else {
            nums.push_back(n);
            break;
        }
    }
    
    for (int i=0; i<nums.size(); i++) {
        for (int j=i+1; j<nums.size(); j++) {
            if(nums.at(i) < nums.at(j)) {
                int temp = nums.at(i);
                nums.at(i) = nums.at(j);
                nums.at(j) = temp;
            }
        }
    }
    
    for(int i=0; i<nums.size(); i++) {
        answer = answer * 10 + nums.at(i);
    }
    
    return answer;
}