//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int c = x ^ y;
        int count = 0;
        while (c != 0) {
            if(c % 2 == 1)
                ++count;
            c = c/2;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.hammingDistance(5,3);
    return 0;
}