#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

struct ListNode {
    int m_nKey;
    ListNode *m_pNext;
};

int main() {
    ios::sync_with_stdio(false);
    int n, k, val;
    while (cin >> n) {
        auto *head = new ListNode;
        head->m_pNext = nullptr;
        while (n--) {
            cin >> val;
            auto *newNode = new ListNode;
            newNode->m_nKey = val;
            newNode->m_pNext = head->m_pNext;
            head->m_pNext = newNode;
        }
        cin >> k;
        auto *cur = head;
        while (k--) cur = cur->m_pNext;
        cout << cur->m_nKey << '\n';
    }
    return 0;
}