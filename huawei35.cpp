//这个题就是硬找规律，感觉没啥做的意义...

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
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col < n - row + 1; col++) {
            cout << (pow(col + row - 1, 2) + col + row - 1) / 2 - row + 1 << ' ';
        }
        cout << (n * n + n) / 2 - row + 1 << '\n';
    }
    return 0;
}