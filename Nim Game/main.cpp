//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};

int main() {
    Solution s;
    cout << s.canWinNim(16);
}