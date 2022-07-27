#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

static bool cmp(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    unordered_map<char, int> counts;
    vector<pair<char, int>> sorted;

    for (auto &x:s) {
        if (counts.count(x)) counts[x]++;
        else counts.emplace(make_pair(x, 1));
    }

    for (auto &p:counts) sorted.emplace_back(p);
    sort(sorted.begin(), sorted.end(), cmp);
    int min_val = sorted[0].second;

    for (auto &x:s) {
        if (counts[x] == min_val) continue;
        cout << x;
    }

    return 0;
}