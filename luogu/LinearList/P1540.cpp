// - [P1540 [NOIP2010 提高组] 机器翻译](https://www.luogu.com.cn/problem/P1540)
/*
 * 为什么选择deque而不是queue
 * (无关) deque重载了[]运算符，更方便
 * deque有迭代器，可以拿到deque.begin()和deque.end()，则可以直接使用algorithm库中的std::find()
 */
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int n, m, k, ret = 0;
deque<int> memory;

int main() {
    cin >> m >> n;

    while (n--) {
        cin >> k;
        if (find(memory.begin(), memory.end(), k) == memory.end()) {
            memory.emplace_back(k);
            ret++;
            if (memory.size() > m) memory.pop_front();
        } else continue;
    }

    cout << ret;
    return 0;
}