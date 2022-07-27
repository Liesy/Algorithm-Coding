#include <bits/stdc++.h>

#include <utility>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n_candi, n_votes, invalids = 0;
    string s;
    cin >> n_candi;

    unordered_map<string, int> rets;
    vector<string> orders(n_candi);

    for (int i = 0; i < n_candi; ++i) {
        cin >> s;
        rets.emplace(make_pair(s, 0));
        orders[i] = s;
    }

    cin >> n_votes;

    for (int i = 0; i < n_votes; ++i) {
        cin >> s;
        if (!rets.count(s)) {
            invalids++;
            continue;
        }
        rets[s]++;
    }

    for (auto &name: orders) cout << name << " : " << rets[name] << '\n';
    cout << "Invalid : " << invalids << '\n';

    return 0;
}