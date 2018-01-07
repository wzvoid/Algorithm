#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return true;
    }
};

int main() {
    Solution s;
    vector<int> v={1,2,3};
    cout << s.containsDuplicate(v);
    return 0;
}