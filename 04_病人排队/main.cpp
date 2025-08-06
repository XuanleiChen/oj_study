#include <iostream>
#include <iomanip>
typedef struct pat {
    unsigned int id;
    unsigned int age;
} pat;
using namespace std;

int main(void) {
    int n, oldcount = 0, count = 0;
    cin >> n;
    pat arr[100], old[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].id;
        cin >> arr[i].age;
        if (arr[i].age >= 60) {
            old[oldcount] = arr[i];
            oldcount++; // 记录60岁及以上患者的数量
        }
        count++; // 记录总患者数量
    }
    // 对60岁及以上的患者按年龄降序排序
    for (int i = 0; i < oldcount - 1; i++) {
        for (int j = 0; j < oldcount - i - 1; j++) {
            if (old[j].age < old[j + 1].age) {
                pat t = old[j];
                old[j] = old[j + 1];
                old[j + 1] = t;
            }
        }
    }
    // 将非老年患者移动到old数组中老年患者之后
    for (int i = 0, j = 0; i < count; i++) {
        if (arr[i].age < 60) {
            old[oldcount + j] = arr[i];
            j++;
        }
    }
    // 输出所有患者的ID，前面补零到6位
    for (int i = 0; i < count; i++) {
        cout << setfill('0') << setw(6) << old[i].id << endl;
    }
    return 0;
}