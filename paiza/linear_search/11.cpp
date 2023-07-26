https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step3

// 問題文
// 整数 n と、数列 a_1, ... , a_n と、整数 k が与えられます。
// 数列に含まれる値で、k 以下であるもののうち、値が最大のものを出力してください。
// なお、k 以下である値が必ず数列に含まれていることが保証されています。

// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, num, k, maxVal=-99999;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }

    cin >> k;
    for (int i = 0; i < n; i++) {
        if (vec[i] <= k) {
            maxVal = max(maxVal, vec[i]);
        }
    }

    cout << maxVal << endl;

    return 0;
}
