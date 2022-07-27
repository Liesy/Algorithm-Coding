#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 20;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int dp[N][N], m, n;  // m个苹果n个盘子，dp[i][j]表示i个苹果放进j个盘子的方法数

int main() {
    ios::sync_with_stdio(false);

    mem(dp, 0);
    // 把0个苹果放进n个盘子只有一种放法：(0,0,...,0)
    for (int j = 1; j <= n; j++) dp[0][j] = 1;
    // 把m个苹果放进1个盘子只有一种放法：(n)
    for (int i = 1; i <= m; i++) dp[i][1] = 1;

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            // 苹果少，盘子多，多出来的盘子无论怎么排列组合效果都是一样的（题意）
            if (i < j) dp[i][j] = dp[i][i];
            else dp[i][j] = dp[i - j][j] + dp[i][j - 1];
            // 苹果多，盘子少，
        }
    }

    cout << dp[m][n];
    return 0;
}