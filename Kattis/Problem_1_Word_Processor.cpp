#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
void setIO(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("word");
    
    int n, k; cin >> n >> k;
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        if(sz(s) + tmp <= k){
            tmp += sz(s);
            if(i > 1) cout << " ";
            cout << s;
        }
        else{
            tmp = sz(s);
            cout << endl;
            cout << s;
        }
    }
    
    return 0;
}