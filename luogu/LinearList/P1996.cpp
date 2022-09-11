// - [P1996 约瑟夫问题](https://www.luogu.com.cn/problem/P1996)
#include <iostream>
#include <queue>

using namespace std;

int n, m, now = 0;
queue<int> people;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) people.emplace(i + 1);

    while (!people.empty()) {
        now++;
        if (now == m) {
            cout << people.front() << ' ';
            now = 0;
        } else people.emplace(people.front());
        people.pop();
    }

    return 0;
}