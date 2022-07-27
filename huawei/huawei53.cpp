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
    int maps[] = {4, 2, 3, 2};
    if (n <= 2) cout << -1;
    else cout << maps[(n - 2) % 4];
    return 0;
}