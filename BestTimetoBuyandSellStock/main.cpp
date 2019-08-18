#include<iostream>

using namespace std;

class Solution {
public:
//    int maxProfit(vector<int> &prices) {
//        int profit = 0, size = prices.size();
//        for (int i = 0; i < size - 1; ++i)
//            for (int j = i + 1; j < size; ++j) {
//                if((prices[j] > prices[i]) && ((prices[j] - prices[i]) > profit))
//                    profit = prices[j] - prices[i];
//            }
//        return profit;
//    }
    int max(int a, int b) {
        return a > b ? a : b;
    }

    int maxProfit(vector<int> &prices) {
        int max_current, max_sofar, size = prices.size();
        max_current = max_sofar = 0;
        for (int i = 1; i < size; ++i) {
            max_current = max(max_current += prices[i] - prices[i - 1], 0);
            max_sofar = max(max_current,max_sofar);
        }
        return max_sofar;
    }
};

int main() {

    return 0;
}