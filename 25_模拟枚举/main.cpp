#include<bits/stdc++.h>
#define I 1
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    unordered_set<int> s;
    for(int j = 0;j < n;j++) {
        cin >> arr[j];
        s.insert(arr[j]); //一个集合防止重复
    }
    int ans = INT_MAX;
    for(auto &x : s) {
        int cnt = 0;
        for(int j = 0;j < n;j++) {
            if(arr[j] == x) continue;
            cnt++;
            j += k - 1;
        }
        ans = min(ans, cnt);
    }
    cout << ans << '\n';
}
int main(){
    #if I
    int _;cin >> _;while(_--) solve();
    #else
    solve();
    #endif
}