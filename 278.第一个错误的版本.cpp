// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem278.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int left = 1, right = n;
        int mid;
        while (left != right)
        {
            mid = left + (right - left) / 2;
            if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
}

;
// @lc code=end
