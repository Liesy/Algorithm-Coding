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
    cout << n * 2 + n * (n - 1) / 2 * 3;
    //等差数列求和公式 Sn = n·a1 + n(n-1)/2 * d
    return 0;
}