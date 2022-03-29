#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<string> sen;
    string s;
    while (cin >> s) sen.emplace_back(s);
    for (int i = sen.size() - 1; i > 0; --i) cout << sen[i] << ' ';
    cout << sen[0] << '\n';
    return 0;
}