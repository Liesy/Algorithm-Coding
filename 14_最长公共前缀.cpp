#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {//一个巧解
        int len = strs.size();
        if (!len) return "";

        vector<string> sorted_str = strs;
        sort(sorted_str.begin(), sorted_str.end());

        string maxlen_str = sorted_str[len - 1], minlen_str = sorted_str[0];
        string res = "";
        for (int i = 0; i < maxlen_str.size() && i < minlen_str.size(); i++) {
            if (maxlen_str[i] == minlen_str[i]) res += maxlen_str[i];
            else break;
        }

        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;
    vector<string> str;
    str.emplace_back("flower");
    str.emplace_back("flow");
    str.emplace_back("flight");
    cout << s.longestCommonPrefix(str) << '\n';
    return 0;
}

//编写一个函数来查找字符串数组中的最长公共前缀。 
//
// 如果不存在公共前缀，返回空字符串 ""。 
//
// 
//
// 示例 1： 
//
// 
//输入：strs = ["flower","flow","flight"]
//输出："fl"
// 
//
// 示例 2： 
//
// 
//输入：strs = ["dog","racecar","car"]
//输出：""
//解释：输入不存在公共前缀。 
//
// 
//
// 提示： 
//
// 
// 1 <= strs.length <= 200 
// 0 <= strs[i].length <= 200 
// strs[i] 仅由小写英文字母组成 
// 
// Related Topics 字符串 
// 👍 1720 👎 0
