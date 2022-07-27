#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

/*
// 判断是否为质数
bool is_prime(int x) {
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i <= sqrt(x) + 1; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}
 */

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n) && i <= n; ++i) {
        while (n % i == 0) {
            cout << i << ' ';
            n /= i;
        }
    }
    if (n - 1) cout << n;
    return 0;
}