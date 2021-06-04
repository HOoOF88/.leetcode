// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem560.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> h;
        h[0] = 1;
        int total=0,count=0;
        for(int i = 0;i<nums.size();++i)
        {
            
            total += nums[i];
            auto it = h.find(total-k);
            if(it!=h.end())
            {

                count+=h[total-k];
            }
            h[total]++;
        }

        return count;
    }
};
// @lc code=end

