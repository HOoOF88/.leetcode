// @before-stub-for-debug-begin

// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=518 lang=cpp
 *
 * [518] 零钱兑换 II
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int a[amount+1] ;
        memset(a,0,sizeof(a));
        a[0] = 1;

        for(int j = 0;j<coins.size();j++)
        {
            for(int i=1;i<=amount;i++)
            {
                if(i>=coins[j])
                {
                    a[i] += a[i-coins[j]];
                }
            }
            
        }
        return a[amount];
    }
};
// @lc code=end
