#include <bits/stdc++.h>

#define mem(f, v) memset(f,v,sizeof(f))
const int maxn = 500;
using namespace std;

int n, m, L;
int h[maxn];

int main() {
    ios::sync_with_stdio(false);

    mem(h, 0);
    cin >> n >> m >> L;

    int temp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> temp;
            h[temp]++;
        }
    }

    for (int i = 0; i < L; i++)
        cout << h[i] << ' ';

    return 0;
}