#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

//鸡翁、鸡母、鸡雏分别为x, y, z 三个变量。
//x+y+z=100
//5x+3y+z/3=100
//确定x即可算出y和z，若y和z为非负整数，则为有效结果，输出。

int main() {
    ios::sync_with_stdio(false);
    for (int x = 0; x <= 3; x++) {
        cout << 4 * x << " " << 25 - 7 * x << " " << 75 + 3 * x << endl;
    }
    return 0;
}