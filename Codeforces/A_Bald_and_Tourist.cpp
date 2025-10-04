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
    
    int n; cin >> n;
    vector<int> v(n);
    ll tot = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        tot += v[i];
    }
    sort(v.rbegin(), v.rend());
    ll t = 0, b = 0;
    for(int i = 0; i < n; i += 2){
        t += v[i];
    }   
    b = tot - t;
    if(t < b) cout << "Bald";
    else cout << "Tourist"; 
    
    return 0;
}