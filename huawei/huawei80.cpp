#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<int> nums;
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        nums.emplace_back(m);
    }
    cin >> n;
    while (n--) {
        cin >> m;
        nums.emplace_back(m);
    }
    sort(nums.begin(), nums.end());
    auto end = unique(nums.begin(), nums.end());
    for (auto it = nums.begin(); it != end; ++it) cout << *it;
    return 0;
}