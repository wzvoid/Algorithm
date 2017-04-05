//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
            int carry = (a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
    //3.93%
//    int getSum(int a, int b) {
//        if (b == 0) return a;
//        int sum = a ^ b;
//        int carry = (a & b) << 1;
//        return getSum(sum, carry);
//    }
};

int main() {
    Solution s;
    cout << s.getSum(30,20);
    return 0;
}