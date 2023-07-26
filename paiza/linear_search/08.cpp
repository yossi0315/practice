https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step0

// 問題文
// 整数 n と、数列 a_1, ... , a_n が与えられます。
// 数列を先頭から順に見たときに、最初に現れる偶数が何番目にあるかを求めてください。最初の要素 (a_1) を 1 番目とします。
// なお、与えられる数列には必ず偶数が含まれていることが保証されています。

// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, num, ans;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
