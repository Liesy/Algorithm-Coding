#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, pos, ret = 0;
    ll square;
    string s1, s2;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        if ((i % 10 == 0) || (i % 10 == 1) || (i % 10 == 5) || (i % 10 == 6)) {// 只有这四种能组成自守数
            square = i * i;
            s1 = to_string(i), s2 = to_string(square);
            pos = s2.size() - s1.size();
            if (s2.find(s1, pos) != -1) ret++;  // string的find方法
        }
    }
    cout << ret;
    return 0;
}