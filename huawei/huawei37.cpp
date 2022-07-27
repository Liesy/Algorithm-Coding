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
    int maps[50];
    maps[0] = 1, maps[1] = 1;
    for (int i = 2; i < n; i++) maps[i] = maps[i - 1] + maps[i - 2];
    cout << maps[n - 1];
    return 0;
}