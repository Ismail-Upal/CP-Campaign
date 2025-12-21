#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        stack<char> stk;
        for(char i : s){
            if(!stk.empty() and i == stk.top()) stk.pop();
            else stk.push(i);
        }
        if(stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}