#include<bits/stdc++.h>
#include "debugging.h"
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
    opt(); // setIO();
    
    vector<int> v(7);
    for(int i = 0; i < 7; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[1] << " " << v[6] - (v[0] + v[1]) << endl;
    
    return 0;
}