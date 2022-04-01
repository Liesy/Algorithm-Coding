#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

bool is_prime(int x) {
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i <= sqrt(x) + 1; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = n / 2; i > 1; --i) {//为什么i!=1，因为1既不是质数也不是合数
        if (is_prime(i) && is_prime(n - i)) {
            cout << i << '\n' << n - i << '\n';
            break;
        }
    }
    return 0;
}