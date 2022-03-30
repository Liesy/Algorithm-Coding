#include <bits/stdc++.h>

#define mem(f, v) memset(f, v, sizeof(f))

typedef long long ll;
const int N = 2;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void compute(stack<int> &x, stack<char> &y) {
    int b = x.top();
    x.pop();
    int a = x.top();
    x.pop();
    char opt = y.top();
    y.pop();
    if (opt == '+') x.emplace(a + b);
    else if (opt == '-') x.emplace(a - b);
    else if (opt == '*') x.emplace(a * b);
    else if (opt == '/') x.emplace(a / b);
}

bool prior_than(char &x, char &y) {
    if (x == '(') return false;  //特殊情况。左括号不参与比较，只有碰见右括号才运算到左括号
    if ((x == '+' || x == '-') && (y == '*' || y == '/')) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);

    stack<int> nums;
    stack<char> opts;

    // 标识是否是运算符，默认不是运算符而是正负号
    bool punctuation = false;

    string s;
    cin >> s;
    opts.emplace('(');  //整个表达式添加左括号
    s.push_back(')');

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') opts.emplace(s[i]);
        else if (s[i] == ')') {
            while (opts.top() != '(') compute(nums, opts);
            opts.pop();
        } else if (punctuation) {//运算符
            //当碰见加减号的时候，如果前面是乘除号，那就可以直接把前面的乘除号运算掉，只留下加减号
            while (prior_than(opts.top(), s[i])) compute(nums, opts);  // 保证符号栈里只有加减
            opts.emplace(s[i]);
            punctuation = false;  // 把当前的加减号作为下一批数字的正负号，所以不是运算符
        } else {//处理数字（可能大于1位）
            int start = i;
            if (s[start] == '+' || s[start] == '-') i++;  // 正负号
            while (s[i] >= '0' && s[i] <= '9') i++;
            string number = s.substr(start, i - start);
            nums.emplace(stoi(number));

            i--;  //跳出while的时候s[i]已经不是数字了，防止和for的+1重复
            punctuation = true;
        }
    }

    cout << nums.top();

    return 0;
}