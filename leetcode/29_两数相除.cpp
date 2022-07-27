#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long divide(long long dividend, long long divisor) {
        if (dividend == INT32_MIN && divisor == -1)
            return INT32_MAX;

        bool flag = (dividend > 0) ^ (divisor > 0);
        dividend = abs(dividend), divisor = abs(divisor);

        long long res = 0;
        int k = 0;
        while (dividend >= divisor) {
            k = 0;
            while (dividend > (divisor << (k + 1))) k++;
            dividend -= divisor << k;
            res += 1 << k;
        }

        return flag ? -res : res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;

    return 0;
}

//给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。 
//
// 返回被除数 dividend 除以除数 divisor 得到的商。 
//
// 整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2 
//
// 
//
// 示例 1: 
//
// 输入: dividend = 10, divisor = 3
//输出: 3
//解释: 10/3 = truncate(3.33333..) = truncate(3) = 3 
//
// 示例 2: 
//
// 输入: dividend = 7, divisor = -3
//输出: -2
//解释: 7/-3 = truncate(-2.33333..) = -2 
//
// 
//
// 提示： 
//
// 
// 被除数和除数均为 32 位有符号整数。 
// 除数不为 0。 
// 假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−2³¹, 231 − 1]。本题中，如果除法结果溢出，则返回 231 − 1。 
// 
// Related Topics 位运算 数学 👍 661 👎 0
