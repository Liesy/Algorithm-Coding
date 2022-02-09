#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *ret = nullptr;

    ListNode *reverseList(ListNode *current, ListNode *prev = nullptr) {
        if (current == nullptr) return nullptr;

        if (current->next != nullptr) {
            reverseList(current->next, current);
        } else {
            ret = current;
        }
        current->next = prev;//停止递归
        return ret;
    }

//    //参考答案
//    ListNode *reverseList(ListNode *head) {
//        if (!head || !head->next) {
//            return head;
//        }
//        ListNode *newHead = reverseList(head->next);
//        head->next->next = head;//很关键
//        head->next = nullptr;//每个head都在递归的时候保存了，这个保证不会死循环
//        return newHead;
//    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    ios::sync_with_stdio(false);
    Solution s;
    auto *head = new ListNode(1);
    ListNode *cur = head;
    for (int i = 2; i < 6; ++i) {
        auto *newNode = new ListNode(i);
        cur->next = newNode;
        cur = cur->next;
    }

    ListNode *ret = s.reverseList(head);

    return 0;
}

//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
// 
// 
// 
//
// 示例 1： 
//
// 
//输入：head = [1,2,3,4,5]
//输出：[5,4,3,2,1]
// 
//
// 示例 2： 
//
// 
//输入：head = [1,2]
//输出：[2,1]
// 
//
// 示例 3： 
//
// 
//输入：head = []
//输出：[]
// 
//
// 
//
// 提示： 
//
// 
// 链表中节点的数目范围是 [0, 5000] 
// -5000 <= Node.val <= 5000 
// 
//
// 
//
// 进阶：链表可以选用迭代或递归方式完成反转。你能否用两种方法解决这道题？ 
// 
// 
// Related Topics 递归 链表 👍 2263 👎 0
