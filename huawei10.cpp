#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    char c;
    unordered_set<char> exist;

    int ret = 0;
    while (cin >> c) {
        if (exist.count(c)) continue;
        exist.emplace(c);
        ret++;
    }

    cout << ret << '\n';

    return 0;
}