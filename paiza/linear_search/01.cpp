https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_value_step0
      
// 問題文
// 整数 n と、数列 a_1, ... , a_n と、整数 k が与えられます。
// a_1, ... , a_n のうち k は何個あるかを求めてください。


// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, key, k;
    cin >> n;
    map<int, int> my_map;
    
    for (int i = 0; i < n; i++) {
        cin >> key;
        my_map[key]++;
    }
    
    // for (auto& [key, value] : my_map) {
    //     cout << key << ":" << value << endl;
    // }
    
    cin >> k;
    cout << my_map[k] << endl;

    return 0;
}

