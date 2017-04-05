//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        auto size = nums.size();
        for (int i = 0; i < size -1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (target == nums[i] + nums[j]) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
        return indices;
    }
};

int main() {
    Solution s;
    vector<int> a = {2, 7, 11, 15}, b;
    b = s.twoSum(a ,18);
    cout << b[0] << " " << b[1];
    return 0;
}