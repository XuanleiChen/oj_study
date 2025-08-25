#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    if (!(cin >> N)) return 0;

    // 先用公式估一个 d，再校正一次
    long long d = (long long)floor((sqrtl(8.0L * N + 1) - 1) / 2);
    while (d * (d + 1) / 2 < N) ++d;

    long long prev = d * (d - 1) / 2; // T_{d-1}
    long long p = N - prev;           // 该对角线内的第 p 个（从1开始）

    long long num, den;
    if (d % 2 == 0) {          // 偶数对角线：1/d, 2/(d-1), ...
        num = p;
        den = d - p + 1;
    } else {                   // 奇数对角线：d/1, (d-1)/2, ...
        num = d - p + 1;
        den = p;
    }

    cout << num << "/" << den << "\n";
    return 0;
}
