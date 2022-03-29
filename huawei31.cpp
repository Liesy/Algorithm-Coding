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
    getline(cin, s);
    int i = 0, j = 0;
    vector<string> ret;
    while (i < s.length()) {
        if ((s[i] >= 'a' && s[j] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            j = i;
            while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) j++;
            ret.emplace_back(s.substr(i, j - i));
            i = j;
        } else {
            i++;
            continue;
        }
    }
    reverse(ret.begin(), ret.end());
    for (auto &x:ret) cout << x << ' ';
    return 0;
}