#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if(a[0] == 1 or a[1] == a[0]){
        cout << "YES"; 
    }
    else if(a[0] + a[1] == a[2]) cout << "YES" ;
    else cout << "NO";
    
    
    return 0;
}