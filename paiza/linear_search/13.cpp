// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_boss

// 問題文
// n 人の生徒がテストを受けました。このテストで k 点以上 l 点以下の点数を取った人が合格です。
// n 人の各生徒について、その人の名前とその人が取った点数が入力として与えられるので、このテストに合格した人の名前をすべて、入力された順に改行区切りで出力してください。
// なお、合格者が一人もいない場合は、何も出力しないでください。

// 解答
#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;

    vector<pair<string, int>> arr(n);
    for (int i = 0; i < n; i++) {
       cin >> arr[i].first >> arr[i].second;
    }

    int k, l;
    cin >> k >> l;
    for (int i = 0; i < n; i++) {
        if (arr[i].second > k && arr[i].second < l) {
            cout <<  arr[i].first << endl;
        }
    }
    
}
