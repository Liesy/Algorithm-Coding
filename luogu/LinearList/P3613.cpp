/*
 * - [P3613 【深基15.例2】寄包柜](https://www.luogu.com.cn/problem/P3613)
 * C++STL—pair＜int,int＞与unordered_map的结合使用: https://blog.csdn.net/lr_shadow/article/details/115864228
 * 当然，也可以直接用map，不用写自定义的哈希函数
 */

#include <iostream>
#include <unordered_map>

using namespace std;

// 分别计算出内置类型的 Hash Value 然后对它们进行 Combine 得到一个哈希值
// 一般直接采用移位加异或（XOR）得到哈希值
struct HashFunc {
    template<typename T, typename U>
    size_t operator()(const std::pair<T, U> &p) const {
        return std::hash<T>()(p.first) ^ std::hash<U>()(p.second);
    }
};

// 键值比较，哈希碰撞的比较定义，需要直到两个自定义对象是否相等
struct EqualKey {
    template<typename T, typename U>
    bool operator()(const std::pair<T, U> &p1, const std::pair<T, U> &p2) const {
        return p1.first == p2.first && p1.second == p2.second;
    }
};

int n, q, i, j, k, opt;
unordered_map<pair<int, int>, int, HashFunc, EqualKey> locker;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> q;
    while (q--) {
        cin >> opt >> i >> j;
        pair<int, int> p = make_pair(i, j);
        if (opt == 1) {
            cin >> k;
            if (!locker.count(p)) locker.emplace(p, k);
            else locker[p] = k;
        } else if (opt == 2) cout << locker[p] << '\n';
    }

    return 0;
}