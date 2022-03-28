//华为机试 https://www.nowcoder.com/ta/huawei

#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    string s;
    char target;
    getline(cin,s);
    cin >> target;
    if(target-'A'>=0&&target-'Z'<=0) target=target-'A'+'a';
    
    int ret=0;
    for(auto &c:s){
        if(c-'A'>=0&&c-'Z'<=0) c=c-'A'+'a';
        if(c!=target) continue;
        ret++;
    }
    
    cout << ret;
    
    return 0;
}
