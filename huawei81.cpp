#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string t, s;
    cin >> t >> s;
    unordered_set<char> exist;
    for (auto &c: s) exist.emplace(c);
    for (auto &c: t) {
        if (!exist.count(c)) {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}