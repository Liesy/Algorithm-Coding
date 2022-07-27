#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<int> ret;
    char c;
    while (cin >> c) ret.emplace_back((int) (c));
    sort(ret.begin(), ret.end());
    for (auto &x:ret) cout << (char) (x);
    return 0;
}