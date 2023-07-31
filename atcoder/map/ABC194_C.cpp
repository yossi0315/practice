//https://atcoder.jp/contests/abc164/tasks/abc164_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string gift;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> gift;
        s.insert(gift);
    }

    cout << s.size() << endl;

    return 0;
}
