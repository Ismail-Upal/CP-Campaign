#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    stack<char> stk;
    string s; cin >> s;
    for(auto i : s){
        string tmp = "";
        while(stk.size() and i == stk.top()){
            tmp += stk.top();
            stk.pop();
        }
        if(tmp.empty() or sz(tmp) % 2 == 0) stk.push(i); 
    }
    if(stk.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}