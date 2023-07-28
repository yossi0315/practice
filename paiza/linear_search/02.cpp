https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_value_step1

// 問題文      
// 整数 n と、数列 a_1, ... , a_n と、整数 k が与えられます。
// 整数 k が数列の何番目にあるかを求めてください。なお、最初の要素 (a_1) を 1 番目とします。
// ただし、数列に整数 k が含まれていない場合は、0 を出力してください。
// また、数列に整数 k が複数含まれている場合は、数列を先頭から順に見たときに最初に現れる k が数列の何番目にあるかを求めてください。


// 解答
#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    int n, a, k;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[i] = a;
    }
    
    cin >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (k == arr[i]) {
            ans = i + 1;
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}

