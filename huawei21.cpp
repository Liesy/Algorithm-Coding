#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    char alpha[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    char c;
    vector<char> ret;
    while (cin >> c) {
        if (c >= 'a' && c <= 'z') ret.emplace_back((char) (alpha[c - 'a'] + '0'));
        else if (c >= 'A' && c <= 'Z') ret.emplace_back((char) ((c - 'A' + 1) % 26 + 'a'));
        else ret.emplace_back(c);
    }
    for (auto &x:ret) cout << x;
    return 0;
}