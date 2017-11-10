#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
//54%
    int missingNumber(vector<int> &nums) {
        int v_sum = 0, n = nums.size();
        int sum = n + n * (n - 1) / 2;
        for (auto i:nums)
            v_sum += i;
        return sum - v_sum;
    }

//17.19%
//    int missingNumber(vector<int> &nums) {
//        sort(nums.begin(), nums.end());
//        int i;
//        for (i = 0; i < nums.size(); ++i)
//            if (nums[i] != i)
//                break;
//        return i;
//    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 3, 1, 5, 4};
    cout << s.missingNumber(nums);
    return 0;
}