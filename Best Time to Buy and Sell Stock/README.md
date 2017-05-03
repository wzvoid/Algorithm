Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

### Exsample 1:
```
Input: [7, 1, 5, 3, 6, 4]
Output: 5
max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)

```
### Exsample 2:
```
Input: [7, 6, 4, 3, 1]
Output: 0
In this case, no transaction is done, i.e. max profit = 0.
```

最蠢的方法就是遍历，我能想得到的也就这种了...

看了solution，才知道有一个经典的算法：`kadane算法`。即最大字数列问题。
具体思想是：遍历数组，在遍历的过程中，依次累加每个元素，结果记为max_ending_here，如果max_ending_here小于0，则将max_ending_here重置为0。然后定义变量max_sofar，记录曾经最大的max_ending_here。
当遍历结束时，max_sofar就是最大字数列的所有元素的累加和。
```
public int maxProfit(int[] prices) {
    int maxCur = 0, maxSoFar = 0;
    for(int i = 1; i < prices.length; i++) {
        maxCur = Math.max(0, maxCur += prices[i] - prices[i-1]);
        maxSoFar = Math.max(maxCur, maxSoFar);
    }
    return maxSoFar;
}
```
最大子数列问题中，有几个需要注意的地方：
1. 最大字数列可以为空，也即是说最大子数列的和可以为0；
2. 若某个字数列包含负数，那么该数列肯定不是最大子数列。[-1, 2,3]，[2, 3]；
3. 在遍历过程中，如果累加小于或等于0，需要重置max_ending_here；

回到这个题目上，该题目可以说是kadane算法的变种。该问题并不是直接求最大子数列，而是求在一次交易中股票的最大收益，也就是说数列中后面某个元素减去前面某个元素的最大值（不能为负，否则就是高价买进低价卖出了）。
那么就要想办法往kadane算法上靠拢了。举例来说：
```
[7, 1, 5, 3, 6, 4] 最大收益是6-1=5，也就是子数列[1, 5, 3, 6]中（5-1）+（3-5）+（6-3）= 6-1 = 5。也就是数列[4, -2, 3]的最大子数列。
```