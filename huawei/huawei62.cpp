#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, ret;
//    while (cin >> n) {
//        ret = 0;
//        while (n > 0) {
//            if ((n & 1) == 1) ret++;
//            n /= 2;
//        }
//        cout << ret << '\n';
//    }
    while (cin >> n) {
        bitset<32> bits(n);
        cout << bits.count() << '\n';
    }
    return 0;
}