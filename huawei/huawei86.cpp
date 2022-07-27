#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, start, ret;
    while (cin >> n) {
        ret = 0;
        for (int i = 0; i < 32; ++i) {// 不超过32位
            while (!((n >> i) & 1)) i++;
            start = i;
            while ((n >> i) & 1) i++;
            ret = max(i - start, ret);
            i--;
        }
        cout << ret << '\n';
    }
    return 0;
}