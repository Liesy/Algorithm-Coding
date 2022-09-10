// - [P1449 后缀表达式](https://www.luogu.com.cn/problem/P1449)

#include <iostream>
#include <stack>

using namespace std;

string s;
int a, b, tmp = 0, ret = 0;
stack<int> numStack;

int main() {
    cin >> s;
    numStack.emplace(0);  // 防止第一个数是负
    for (auto &c: s) {
        if (c == '@') break;
        else if (c == '.') {
            numStack.emplace(tmp);
            tmp = 0;
        } else if (c >= '0' && c <= '9') tmp = tmp * 10 + (c - '0');
        else {
            b = numStack.top();
            numStack.pop();
            a = numStack.top();
            numStack.pop();
            if (c == '+') numStack.emplace(a + b);
            else if (c == '-') numStack.emplace(a - b);
            else if (c == '*') numStack.emplace(a * b);
            else if (c == '/') numStack.emplace(a / b);
        }
    }

    cout << numStack.top() << '\n';

    return 0;
}