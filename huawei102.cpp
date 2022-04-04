#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    unordered_map<char, int> exist;
    vector<pair<char, int>> rets;
    string s;
    cin >> s;
    for (auto &c: s) {
        if (exist.count(c)) exist[c]++;
        else exist.emplace(make_pair(c, 1));
    }
    for (auto &p: exist) rets.emplace_back(p);
    sort(rets.begin(), rets.end(), cmp);
    for (auto &p: rets) cout << p.first;
    return 0;
}