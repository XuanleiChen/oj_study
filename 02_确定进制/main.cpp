#include <iostream> // 提供 cin 和 cout
#include <algorithm> // 提供 reverse 函数 和 max_element 函数
#include <string> // string 类
#include <cmath> // pow 函数
// 此题需要开 long long 不然 90 分

using namespace std;

inline string TO_Be(int B, long long n) {
    string num = "";
    for (; n; n /= B)
        num.push_back(n % B);
    reverse(num.begin(), num.end());
    for (auto& i : num) {
        (i >= 0 && i <= 9) ? i += '0' : i += 'A' - 10;
    }
    return num;
}

inline long long B_to(int B, string n) {
    long long num = 0;
    reverse(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++) {
        if (n[i] >= '0' && n[i] <= '9')
            num += pow(B, i) * (n[i] - '0');
        else
            num += pow(B, i) * (n[i] - 'A' - 10);
    }
    return num;
}

inline int Min(string p, string q, string r) {
    char MIN = *max_element(p.begin(), p.end());
    MIN = max(MIN, *max_element(q.begin(), q.end()));
    MIN = max(MIN, *max_element(r.begin(), r.end()));
    return MIN - '0' + 1;
}

int main() {
    string q, p, r;
    cin >> p >> q >> r;
    for (int B = Min(p, q, r); B < 17; B++) {
        long long pmq = B_to(B, p) * B_to(B, q); // 计算 10 进制乘积
        if (TO_Be(B, pmq) == r) { // 把计算好的乘积转换成 B 进制，然后判等
            cout << B; // 符合条件就输出 B
            return 0; // 结束程序
        }
    }
    cout << 0; // 如果所有进制都不行，按照题目要求输出 0
    return 0;
}
