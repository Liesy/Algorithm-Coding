#include <bits/stdc++.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == nullptr && l2 == nullptr) return nullptr;
        else if (l1 == nullptr) return l2;
        else if (l2 == nullptr) return l1;
        else {
            // 1 2   4
            // 1   3 4
            ListNode *cur_l1 = l1, *cur_l2 = l2, *sorted = new ListNode();
            ListNode * res = sorted;
            while (cur_l1 != nullptr && cur_l2 != nullptr) {
                if (cur_l1->val <= cur_l2->val) {
                    sorted->next = cur_l1;
                    cur_l1 = cur_l1->next;
                }
                else {
                    sorted->next = cur_l2;
                    cur_l2 = cur_l2->next;
                }
                sorted = sorted->next;
            }
            if (cur_l1 == nullptr) sorted->next = cur_l2;
            else sorted->next = cur_l1;
            return res->next;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;

    return 0;
}

//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//
// 
//
// 示例 1： 
//
// 
//输入：l1 = [1,2,4], l2 = [1,3,4]
//输出：[1,1,2,3,4,4]
// 
//
// 示例 2： 
//
// 
//输入：l1 = [], l2 = []
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：l1 = [], l2 = [0]
//输出：[0]
// 
//
// 
//
// 提示： 
//
// 
// 两个链表的节点数目范围是 [0, 50] 
// -100 <= Node.val <= 100 
// l1 和 l2 均按 非递减顺序 排列 
// 
// Related Topics 递归 链表 
// 👍 1840 👎 0
