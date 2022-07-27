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
    set<char> exist;
    cin >> s;

    for (int i = s.length() - 1; i >= 0; --i) {
        if (exist.count(s[i])) continue;
        cout << s[i];
        exist.emplace(s[i]);
    }

    return 0;
}
