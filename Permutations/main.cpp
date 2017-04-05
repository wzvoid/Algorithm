//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    inline void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void permutation(vector<vector<int>> &arry, vector<int> &nums, int start, int end) {
        if (start == end) {
            vector<int> temp;
            for (int i = 0; i <= end; ++i) {
                temp.push_back(nums[i]);
            }
            arry.push_back(temp);
        } else {
            for (int i = start; i <= end; ++i) {
                swap(nums[start], nums[i]);
                permutation(arry, nums, start + 1, end);
                swap(nums[start], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permut;
        permutation(permut, nums, 0, nums.size() - 1);
        return permut;
    }
};

int main() {
    Solution so;
    vector<int> s = {1, 2, 3, 4};
    vector<vector<int>> per = so.permute(s);
    for (auto out:per) {
        for (auto in:out) {
            cout << in;
        }
        cout << endl;
    }
    return 0;
}