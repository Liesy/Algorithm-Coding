#include <bits/stdc++.h>

#define mem(f, v) memset(f,v,sizeof(f))
const int maxn = 610;
using namespace std;

int n, w, score, sum = 0;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w >> score;
        sum += w * score;
    }
    cout << max(0, sum) << '\n';
    return 0;
}