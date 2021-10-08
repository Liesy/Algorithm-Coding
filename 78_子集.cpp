#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        int n = nums.size();
        for (int i = 0; i < (1 << n); i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                // (i & (1 << j)) 保留i转换为二进制数后的第j位数，其他的都改为零
                // 如果第j位数为0，则i&(1<<j)的值为0，否则不为0
                if (i & (1 << j)) temp.emplace_back(nums[j]);//是j不是i
            }
            res.emplace_back(temp);
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;
    vector<int> num;
    for (int i = 1; i <= 3; i++) num.emplace_back(i);
    vector<vector<int>> ans = s.subsets(num);
    for (auto &x:ans) {
        for (auto &y:x) cout << y << ' ';
        cout << '\n';
    }
    return 0;
}

//给你一个整数数组 nums ，数组中的元素 互不相同 。返回该数组所有可能的子集（幂集）。 
//
// 解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [1,2,3]
//输出：[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// 
//
// 示例 2： 
//
// 
//输入：nums = [0]
//输出：[[],[0]]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums.length <= 10 
// -10 <= nums[i] <= 10 
// nums 中的所有元素 互不相同 
// 
// Related Topics 位运算 数组 回溯 👍 1345 👎 0
