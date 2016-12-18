//
// Created by wzvoid on 2016/12/15.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//3.93%
int getSum(int a, int b) {
    if (b == 0) return a;
    int sum = a ^ b;
    int carry = (a & b) << 1;
    return getSum(sum, carry);
}

int main() {
    cout<<getSum(30,20);
    return 0;
}