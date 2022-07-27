#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void get_next(string &t, int *next) {
    int i = 1, j = 0;
    next[1] = 0;
    while (i < t.length()) {
        if (j == 0 || t[i] == t[j]) {
            ++i, ++j;
            if (t[i] != t[j]) next[i] = j;
            else next[i] = next[j];
        } else j = next[j];
    }
}

bool index_KMP(string &s, string &t, const int *next) {
    int i = 1, j = 1;
    while (i <= s.length() && j <= t.length()) {
        if (j == 0 || s[i] == t[i]) ++i, ++j;
        else j = next[j];
    }
    if (j > t.length()) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    string sub, str;
    cin >> sub >> str;
    sub = '-' + sub, str = '-' + str;

    int *next = new int[sub.length() + 1];
    get_next(sub, next);

    if (index_KMP(str, sub, next)) cout << "true";
    else cout << "false";

    return 0;
}