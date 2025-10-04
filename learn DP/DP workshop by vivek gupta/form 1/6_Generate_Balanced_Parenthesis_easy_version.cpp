#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n;
vector<vector<char>> ans;
vector<char> v;
void rec(int len, int open, int close){
    if(len > n) return;
    if(len == n) ans.push_back(v);

    
    if(open > close){
        if(open + 1 <= n / 2){
            v.push_back('(');
            rec(len + 1, open + 1, close);
            v.pop_back();
        }
        if(close + 1 <= n / 2){
            v.push_back(')');
            rec(len + 1, open, close + 1);
            v.pop_back();
        }
    }
    if(open == close and open + 1 <= n / 2){
        v.push_back('(');
        rec(len + 1, open + 1, close);
        v.pop_back();
    }
}

int32_t main()
{   
    opt();
    
    cin >> n;
    rec(0, 0, 0);
    for(auto v : ans){
        for(auto i : v) cout << i;
        cout << endl;
    }
    
    return 0;
}