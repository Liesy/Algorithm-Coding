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
    int start;
    s = "-" + s + "-";  // 加起止符号
    for (int i = 0; i < s.length(); i++) {
        while ((s[i] < '0' || s[i] > '9') && i < s.length()) i++;
        if (i == s.length()) break;

        start = i;
        s.insert(s.begin() + start, '*');
        i++;  // 插入了一个，直接跳过

        while (s[i] >= '0' && s[i] <= '9' & i < s.length()) i++;

        if (i == s.length()) s += "*";
        else s.insert(s.begin() + i, '*');
    }
    cout << s.substr(1, s.length() - 2);
    return 0;
}