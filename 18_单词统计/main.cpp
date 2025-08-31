#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int res = -1, flag = -1;
    string word, cont;
    cin >> word >> cont;

    for (int i = 0; i + cont.size() <= word.size(); i++) {
        if (word.substr(i, cont.size()) == cont) {
            res = i;   // 找到位置
            flag = 1;
            break;     // 如果只要第一个匹配位置，可以直接跳出
        }
    }

    if (res != -1 && flag == 1)
        cout << res << endl;
    else
        cout << -1 << endl;

    return 0;
}
