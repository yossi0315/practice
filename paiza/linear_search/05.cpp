https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_minmax_step0

// 問題文
// 2つの整数 a_1, a_2 が与えられます。
// これらの最大値と最小値をこの順に半角スペース区切りで出力してください。

// 解答
#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int>& vec) {
    int maxVal = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        maxVal = max(maxVal, vec[i]);
    }
    return maxVal;
}

int getMin(vector<int>& vec) {
    int minVal = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        minVal = min(minVal, vec[i]);
    }
    return minVal;
}


int main(void){
    // Your code here!
    int a1, a2;
    cin >> a1 >> a2;

    vector<int> vec;
    vec.push_back(a1);
    vec.push_back(a2);
    // cout << vec[0] << " " << vec[1] << endl;

    int ans[2];
    ans[0] = getMax(vec);
    ans[1] = getMin(vec);

    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
