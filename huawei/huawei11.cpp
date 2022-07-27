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
    cin >> n;
    string ret = to_string(n);
    for (int i = ret.length() - 1; i >= 0; --i) cout << ret[i];

    return 0;
}