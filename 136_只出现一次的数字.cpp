#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNumber(vector<int> &nums) {
        /*
         * 如何才能做到线性时间复杂度和常数空间复杂度呢？
         * 答案是使用位运算。对于这道题，可使用异或运算 ⊕。异或运算有以下三个性质
         * 1. 任何数和 0 做异或运算，结果仍然是原来的数，即 a⊕0=a。
         * 2. 任何数和其自身做异或运算，结果是 0，即 a⊕a=0。
         * 3. 异或运算满足交换律和结合律，即 a⊕b⊕a=b⊕a⊕a=b⊕(a⊕a)=b⊕0=b。
         * 数组中的全部元素的异或运算结果即为数组中只出现一次的数字。
        */
        int ret = 0;
        for (auto x:nums) ret ^= x;
        return ret;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;

    return 0;
}

//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。 
//
// 说明： 
//
// 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？ 
//
// 示例 1: 
//
// 输入: [2,2,1]
//输出: 1
// 
//
// 示例 2: 
//
// 输入: [4,1,2,1,2]
//输出: 4 
// Related Topics 位运算 数组 
// 👍 1969 👎 0
