//华为机试 https://www.nowcoder.com/ta/huawei

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
    if (s.length() == 0) {
        cout << s << '\n';
        return 0;
    }
    int i = 0;
    for (; i < s.length(); i++) {
        cout << s[i];
        if (i != 0 && (i+1) % 8 == 0) cout << '\n';
    }
    
    if(i%8==0) cout << '\n';
    else{
        while(i%8!=0){
            cout << 0;
            i++;
        }
        cout << '\n';
    }

    return 0;
}
