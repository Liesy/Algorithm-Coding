//华为机试 https://www.nowcoder.com/ta/huawei

#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, k, v;
    cin >> n;
    map<int, int> table;

    for (int i = 0; i < n; i++) {
        cin >> k >> v;
        if (!table.count(k)) table.emplace(make_pair(k, v));
        else table[k] += v;
    }

    for (auto& x : table) {
        cout << x.first << ' ' << x.second << '\n';
    }

    return 0;
}
