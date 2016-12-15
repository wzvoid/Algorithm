//
// Created by wzvoid on 2016/12/15.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getSum(int a, int b) {
    return a^b + (a&b)<<1;
}

int main() {
    cout<<getSum(1,2);
    return 0;
}