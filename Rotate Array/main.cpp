#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        vector<int> temp;
        int size = nums.size(), step = k % size;//步长
        for (int i = size - step; i < size; ++i)
            temp.push_back(nums[i]);
        for (int j = size - step - 1; j >= 0; --j)
            nums[(j + step) % size] = nums[j];
        for (int m = 0; m < temp.size(); ++m)
            nums[m] = temp[m];
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for (auto c:nums)
        cout << c;
    return 0;
}