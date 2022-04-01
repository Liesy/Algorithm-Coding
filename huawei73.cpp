#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

bool judge_year(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 != 0) return false;
            else return true;
        } else return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    int y, m, d, ret = 0;
    cin >> y >> m >> d;
    int days_1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (judge_year(y)) for (int i = 0; i < m - 1; ++i) ret += days_2[i];
    else for (int i = 0; i < m - 1; ++i) ret += days_1[i];
    ret += d;
    cout << ret;
    return 0;
}