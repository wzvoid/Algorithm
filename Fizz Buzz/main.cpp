//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str;
        if (n >= 1)
            for (int i = 1; i <= n; ++i) {
                if (i % 3 == 0 && i % 5 == 0)
                    str.push_back("FizzBuzz");
                else if (i % 3 == 0)
                    str.push_back("Fizz");
                else if (i % 5 == 0)
                    str.push_back("Buzz");
                else {
                    //c++ 11 a new function:to_string(i)
                    //str.push_back(to_string(i));

                    //or with the help of sstream, include <sstream>
                    stringstream ss;
                    ss << i;
                    str.push_back(ss.str());
                }
            }
        return str;
    }
};

int main() {
    Solution s;
    vector<string> str = s.fizzBuzz(15);
    for (auto ss:str) {
        cout << ss << endl;
    }
    return 0;
}