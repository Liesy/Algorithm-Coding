#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        stack<char> pair;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') pair.emplace(s[i]);
            else if (!pair.empty() && ((s[i] == '(' && pair.top() == ')') ||
                                       (s[i] == '[' && pair.top() == ']') ||
                                       (s[i] == '{' && pair.top() == '}')))
                pair.pop();
            else return false;
        }
        return pair.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;
    cout << s.isValid("{[]}") << '\n';
    cout << s.isValid("([)]") << '\n';
    cout << s.isValid("({[(") << '\n';
    return 0;
}

//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。 
//
// 有效字符串需满足： 
//
// 
// 左括号必须用相同类型的右括号闭合。 
// 左括号必须以正确的顺序闭合。 
// 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "()"
//输出：true
// 
//
// 示例 2： 
//
// 
//输入：s = "()[]{}"
//输出：true
// 
//
// 示例 3： 
//
// 
//输入：s = "(]"
//输出：false
// 
//
// 示例 4： 
//
// 
//输入：s = "([)]"
//输出：false
// 
//
// 示例 5： 
//
// 
//输入：s = "{[]}"
//输出：true 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 104 
// s 仅由括号 '()[]{}' 组成 
// 
// Related Topics 栈 字符串 
// 👍 2560 👎 0
