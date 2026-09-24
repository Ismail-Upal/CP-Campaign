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
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(c >= a){
        if(d >= b) cout << "No";
        else cout << "Yes";
    }
    else{
        cout << "No" ;
    }
    
    return 0;
}