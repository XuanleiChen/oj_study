#include <iostream>
#include <vector>
#include <algorithm> // 包含nth_element函数的头文件

using namespace std; // 引入std命名空间，简化代码书写

int main() {
    // 初始化vector
    vector<int> v = {5, 1, 7, 3, 10, 18, 9};
     auto it =max_element(v.begin(),v.end());
     cout<<it-v.begin()<<endl;
     cout<<*it<<endl;
     
    return 0;
}