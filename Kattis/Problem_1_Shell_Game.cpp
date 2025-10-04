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
    opt(); //setIO("shell");
    
    int n; cin >> n;

    vector<int> x(4), ans(4);
    for(int i = 1; i <= 3; i++) x[i] = i;

    for(int i = 1; i <= n; i++){
        int a, b, c; cin >> a >> b >> c;
        
        swap(x[a], x[b]);

        ans[x[c]]++;
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
    
    return 0;
}