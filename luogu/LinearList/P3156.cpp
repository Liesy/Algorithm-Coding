// - [P3156 【深基15.例1】询问学号](https://www.luogu.com.cn/problem/P3156)

#include <iostream>
#include <vector>

std::vector<int> stu_id;

int main() {
    std::ios::sync_with_stdio(false);

    int n, m, k;
    std::cin >> n >> m;
    stu_id.reserve(n);

    for (int i = 0; i < n; i++) {
        std::cin >> k;
        stu_id.emplace_back(k);
    }
    while (m--) {
        std::cin >> k;
        std::cout << stu_id[k - 1] << '\n';
    }

    return 0;
}