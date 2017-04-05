//
// Created by wzvoid on 2017/4/5.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        auto size = nums.size();
        //第一种：最简单的方法，向后遍历然后交换,但是 Time Limit Exceeded
        /*int temp,flag;
        for (int i = 0; i < size; i += 2) {
            flag = 0;
            for (int j = i + 1; j < size ; ++j) {
                if(nums[i] == nums[j]){
                    temp = nums[i+1];
                    nums[i+1] = nums[j];
                    nums[j] = temp;
                    flag = 1;
                    break;
                }
            }
            if(!flag)
                return nums[i];
        }
        return nums[size-1];*/

        //第二种：排序，遍历，步长为2。前后比较，若不一样，则返回前一个，否则返回最后一个。Accepted
        /*sort(nums.begin(),nums.end());
        for (int i = 0; i < size -1; i += 2)
            if(nums[i] != nums[i+1])
                return nums[i];
        return nums[size-1];*/

        //第三种：使用异或 如：(2^1^4^5^2^4^1) => ((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5。Accepted
        int single = 0;
        for (int i = 0; i < size; ++i)
            single ^= nums[i];
        return single;
    }
};

int main() {
    Solution s;
    vector<int> v{4, 4, 5, 5, 6, 6, 7};
    cout << s.singleNumber(v);
    return 0;
}