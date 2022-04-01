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
    for (int i = 3; i <= sqrt(x) + 1; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int n, temp, perfect, ret = 0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i) {
        temp = (int) pow(2, i) - 1;
        if (is_prime(i) && is_prime(temp)) {
            perfect = (int) pow(2, i - 1) * temp;
            if (perfect > 0 && perfect < n) ret++;
        }
    }
    cout << ret;
    return 0;
}