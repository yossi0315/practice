https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step2

// 問題文
// 整数 n と、数列 a_1, ... , a_n と、整数 k が与えられます。
// 数列に含まれる値で、k 以上であるもののうち、値が最小のものを出力してください。
// なお、k 以上である値が必ず数列に含まれていることが保証されています。

// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, num, k, minVal=999999;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }

    cin >> k;
    for (int i = 0; i < n; i++) {
        if (vec[i] >= k) {
            minVal = min(minVal, vec[i]);
        }
    }

    cout << minVal << endl;

    return 0;
}
