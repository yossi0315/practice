//https://atcoder.jp/contests/abc097/tasks/abc097_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    int X;
    cin >> X;
    int ans = 1;
    for(int b=2; b*b<=X; b++){
        int p = b*b;
        while(p <= X){
            ans = max(ans, p);
            if((double)p*b > X) break;
            p *= b;
        }
    }
    cout << ans << endl;
    return 0;
}
