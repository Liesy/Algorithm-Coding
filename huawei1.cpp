//华为机试 https://www.nowcoder.com/ta/huawei

#include<string>
#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string s;
    getline(cin, s);
    int n = s.length() - 1;
    while (s[n] == ' ') n--;
    int ret = 0;
    for (int i = n; i >= 0; i--) {
        if (s[i] != ' ') ret++;
        else break;
    }
    cout << ret;
    return 0;
}
