// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        int l = s.length();
        int i = 0;
        if (l == 1)
            return false;
        while (i < l)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                bool a = s[i] == ')' && st.top() == '(';
                bool b = s[i] == '}' && st.top() == '{';
                bool c = s[i] == ']' && st.top() == '[';
                if (a || b || c)
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            i++;
        }
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
