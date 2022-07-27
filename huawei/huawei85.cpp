#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int get_len(string str, int low, int high) {
    while (low >= 0 && high < str.length() && str[low] == str[high]) {
        low--;
        high++;
    }
    return high - low - 1;
}

int main() {
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    if (s.length() <= 1) cout << s.length();
    else {
        int ret = 0;
        for (int i = 0; i < s.length() - 1; ++i) {
            ret = max(max(get_len(s, i, i), get_len(s, i, i + 1)), ret);
        }
        cout << ret;
    }
    return 0;
}