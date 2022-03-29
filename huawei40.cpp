#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int counts[4];
    mem(counts, 0);
    string s;
    getline(cin, s);
    for (auto &c:s) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) counts[0]++;
        else if (c == ' ') counts[1]++;
        else if (c >= '0' && c <= '9') counts[2]++;
        else counts[3]++;
    }
    for (int x : counts) cout << x << '\n';
    return 0;
}