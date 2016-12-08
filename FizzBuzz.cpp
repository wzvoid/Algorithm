#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
vector<string> fizzBuzz(int n) {
    vector<string> str;
    if(n >= 1)
        for (int i = 1; i <= n; ++i) {
            if(i%3==0&&i%5==0)
                str.push_back("FizzBuzz");
            else if(i%3==0)
                str.push_back("Fizz");
            else if(i%5==0)
                str.push_back("Buzz");
            else {
                //c++ 11 新增函数to_string(i)
                //str.push_back(to_string(i));

                //或借助字符串流，要 include <sstream>
                stringstream ss;
                ss<<i;
                str.push_back(ss.str());
            }
        }
    return str;
}
int main() {
    vector<string> str = fizzBuzz(15);
    unsigned long size = str.size();
    for (int i = 0; i < size; ++i) {
        cout << str[i] <<endl;
    }
    return 0;
}