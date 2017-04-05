//
// Created by wzvoid on 2016/12/8.
//

#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int end = s.size(),i = 0,j = end-1;
        char c;
        while (i <= j) {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
            ++i;
            --j;
        }
        return s;
    }
};

int main() {
    Solution s;
    cout << s.reverseString("hellow");
    return 0;
}