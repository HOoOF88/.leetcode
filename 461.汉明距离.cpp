// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem461.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=0;
        while(x!=0||y!=0)
        {
            if((x&1) != (y&1))
                a++;
            x>>=1;
            y>>=1;
        }
        return a;
    }
};
// @lc code=end

