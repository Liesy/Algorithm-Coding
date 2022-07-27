#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string s;
    map<string, int> maps;

    cin >> n;
    while (n--) {
        cin >> s;
        if (maps.count(s)) maps[s]++;
        maps.emplace(make_pair(s, 1));
    }

    for (auto &x:maps) while (x.second--) cout << x.first << '\n';
    return 0;
}