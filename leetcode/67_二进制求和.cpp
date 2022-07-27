#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;//进位
        int bit_res = 0;//每一位的最终结果
        int bit_a, bit_b;//记录a,b的每一位
        int sum = 0;//bit_a+bit_b+carry
        string res = "";//最终答案（最高位在右边）
        if (a.size() < b.size()) return addBinary(b, a);
        for (int i = 0; i < a.size(); i++) {
            bit_a = a[a.size() - 1 - i] - '0';
            if (i < b.size()) bit_b = b[b.size() - 1 - i] - '0';
            else bit_b = 0;
            sum = bit_a + bit_b + carry;
            if (sum >= 2) carry = 1;
            else carry = 0;
            bit_res = sum % 2;
            res += to_string(bit_res);
        }
        //处理最终进位
        if (carry == 1) res += "1";
        //翻转
        reverse(res.begin(), res.end());
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;
    cout << s.addBinary("1010", "1011") << '\n';
    return 0;
}

//给你两个二进制字符串，返回它们的和（用二进制表示）。 
//
// 输入为 非空 字符串且只包含数字 1 和 0。 
//
// 
//
// 示例 1: 
//
// 输入: a = "11", b = "1"
//输出: "100" 
//
// 示例 2: 
//
// 输入: a = "1010", b = "1011"
//输出: "10101" 
//
// 
//
// 提示： 
//
// 
// 每个字符串仅由字符 '0' 或 '1' 组成。 
// 1 <= a.length, b.length <= 10^4 
// 字符串如果不是 "0" ，就都不含前导零。 
// 
// Related Topics 位运算 数学 字符串 模拟 
// 👍 654 👎 0
