https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step6

// 問題文
// n 人の生徒がテストを受けました。このテストで k 点以上の点数を取った人が合格です。
// n 人の各生徒について、その人の名前とその人が取った点数が入力として与えられるので、このテストに合格した人の名前をすべて、入力された順に改行区切りで出力してください。
// なお、合格者が一人もいない場合は、何も出力しないでください。

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    
    vector<pair<string, int>> arr(n);
    for (int i = 0; i < n; i++) {
       cin >> arr[i].first >> arr[i].second;
    }

    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (arr[i].second > k) {
            cout <<  arr[i].first << endl;
        }
    }
}