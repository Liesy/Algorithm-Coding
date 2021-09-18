#include <bits/stdc++.h>

#define mem(f, v) memset(f,v,sizeof(f))
const int maxn = 610;
using namespace std;

int n, L, r, t;
int pixel[maxn][maxn];
int res = 0;

int main() {
    ios::sync_with_stdio(false);
    mem(pixel, 0);
    cin >> n >> L >> r >> t;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> pixel[i][j];

    int sum = 0, num = 0, lastSum = 0, lastNum = 0;
    for (int i = 1; i <= n; i++) {//遍历每行
        sum = num = 0;
        int limitX = i + r > n ? n : i + r;
        int limitY = 1 + r > n ? n : 1 + r;

        ////以下计算某行第一个元素的领域值
        int startX = i - r < 1 ? 1 : i - r;
        for (int k = startX; k <= limitX; k++)
            for (int m = 1; m <= limitY; m++) {
                sum += pixel[k][m];
                num++;
            }
        lastNum = num;
        lastSum = sum;
        if (sum <= t * num) res++;

        ////以下借助前一个元素的领域值算当前元素的领域值
        for (int j = 2; j <= n; j++) {
            sum = lastSum;

            if (j - r <= 1) {//领域[触碰]到左边界，不需要减去左边一列的值
                num = lastNum + (limitX - startX + 1);//limitX-startX+1为领域一列的元素个数
                for (int m = startX; m <= limitX; m++)
                    sum += pixel[m][j + r];//加上新增的一列值
            } else if (j + r > n) {//领域[越过]到右边界，不需要新增右边的一列
                num = lastNum - (limitX - startX + 1);
                for (int m = startX; m <= limitX; m++)
                    sum -= pixel[m][j - r - 1];//减去左边一列的，注意是j-r-1
            } else {//既要减少左边一列，又要增加右边一列
                num = lastNum;//不变
                for (int m = startX; m <= limitX; m++)
                    sum += (pixel[m][j + r] - pixel[m][j - r - 1]);
            }

            lastNum = num;
            lastSum = sum;
            if (sum <= t * num) res++;
        }
    }

    cout << res << '\n';
    return 0;
}


//// 以下为暴力求解，70分，后三个点被卡复杂度
//bool isDark(int i, int j) {
//    int ave = 0, count = 0;
//    for (int row = i - r; row <= i + r && row <= n; row++) {
//        row = row < 1 ? 1 : row;
//        for (int col = j - r; col <= j + r && col <= n; col++) {
//            col = col < 1 ? 1 : col;
//            ave += pixel[row][col];
//            count++;
//        }
//    }
//    if (ave <= t * count) return true;
//    return false;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    mem(pixel, 0);
//    cin >> n >> L >> r >> t;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            cin >> pixel[i][j];
//
//    int res = 0;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            if (isDark(i, j)) res++;
//
//    cout << res << '\n';
//
//    return 0;
//}