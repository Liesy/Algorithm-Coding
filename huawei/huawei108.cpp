#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

// 更相减损术
int gcd(int a, int b) {
    int temp = abs(a - b);
    while (temp != 0) {
        a = b;
        b = temp;
        temp = abs(a - b);
    }
    return b;
}

// 欧几里得算法
int gcd_Euclid(int a, int b) {
    return b ? gcd_Euclid(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false);
    // 最小公倍数 = 两数相乘 / 两数的最大公约数
    int a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b);
    return 0;
}