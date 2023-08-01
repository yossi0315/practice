// https://atcoder.jp/contests/abc155/tasks/abc155_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    
    map<string, int> my_map;
    for (int i = 0; i < n; i++) {
        cin >> s;
        my_map[s]++;
    }
    
    int max_freq = 0;
    for(auto& [key, value] : my_map) {
        max_freq = max(max_freq, value);
    }

    for(auto& [key, value] : my_map) {
        if (value == max_freq) {
            cout << key << endl;
        }
    }
    
    return 0;
}
