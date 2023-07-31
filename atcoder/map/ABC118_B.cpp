// https://atcoder.jp/contests/abc118/tasks/abc118_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    map<int, int> my_map;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            my_map[a]++;
        }
    }
    
    int ans = 0;
    for (auto& [key, value] : my_map) {
        if (value == n) ans++;
        //cout << key << ":" << value << endl;
    }
    
    cout << ans << endl;

    return 0;
}
