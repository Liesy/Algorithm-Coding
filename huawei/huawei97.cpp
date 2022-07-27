#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, num, sum = 0, neg_sum = 0, pos_len = 0;
    cin >> n;
    while (n--) {
        cin >> num;
        if (num < 0) {
            neg_sum++;
            continue;
        } else if (num > 0) {
            sum += num;
            pos_len += 1;
        } else;
    }
    pos_len = pos_len > 0 ? pos_len : 1;
    auto avg = (float) sum / (float) pos_len;
    printf("%d %.1f", neg_sum, avg);
    return 0;
}