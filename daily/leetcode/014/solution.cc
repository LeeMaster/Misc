/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (34.47%)
 * Likes:    661
 * Dislikes: 0
 * Total Accepted:    110.3K
 * Total Submissions: 320K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 示例 1:
 * 
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 * 
 * 
 * 说明:
 * 
 * 所有输入只包含小写字母 a-z 。
 * 
 */

// @lc code=start
#include <vector> 
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        auto ans = strs[0];
        for (auto i = 1; i < strs.size(); i++){
            auto j = 0;
            for (;j < ans.size() && j < strs[i].size();j++){
                if (ans.at(j)!= strs[i].at(j))
                    break;
            }
            ans = strs[i].substr(0, j);
            if (ans == "")return ans;
        }

        return ans;
    }
};
// @lc code=end

