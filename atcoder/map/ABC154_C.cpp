// https://atcoder.jp/contests/abc154/tasks/abc154_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a]++;
    }

    bool ans = false;
    for (auto& [key, value] : m) {
        //cout << key << ":" << value << endl;
        if (value != 1) ans = true; 
    }
    
    ans ? cout << "NO" << endl : cout << "YES" << endl;
     
    return 0;
}
