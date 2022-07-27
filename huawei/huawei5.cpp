//华为机试 https://www.nowcoder.com/ta/huawei

#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int n = s.length();
    int ret = 0;

    for (int i = 2; i < n; i++) {
        int cur;
        if (s[i] - '0' >= 0 && s[i] - '9' <= 0) cur = s[i] - '0';
        else cur = s[i] - 'A' + 10;
        ret += cur * pow(16, n - i - 1);
    }

    cout << ret;

    return 0;
}
