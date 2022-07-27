#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m, odd;
    while (cin >> m) {
        odd = m * m - (m - 1); //根据公式获取起点奇数
        cout << odd;
        for (int i = 1; i < m; i++) //遍历后续m-1个奇数
            cout << '+' << odd + 2 * i; //输出
        cout << '\n';
    }
    return 0;
}