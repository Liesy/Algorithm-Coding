#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, a, b, ret = 0;
    cin >> n;
    while (n != 0) {
        ret = 0;
        a = n / 3, b = n % 3;
        while (a > 0) {
            ret += a;
            n = a + b;
            a = n / 3, b = n % 3;
        }
        if (n >= 2) ret++;
        cout << ret << '\n';
        cin >> n;
    }
    return 0;
}