https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_value_boss

// 問題文
// 整数 n と、数列 a_1, ... , a_n と、整数 k が与えられます。
// 整数 k が数列の何番目にあるかを求めてください。最初の要素 (a_1) を 1 番目とします。
// 数列に整数 k が複数含まれている場合は、そのすべてについて何番目にあるかを求め、数列を先頭から見たときに現れる順にすべて出力してください。
// ただし、整数 k が数列に含まれていない場合は、何も出力しないでください。

// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, a, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            ans.push_back(i + 1);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
