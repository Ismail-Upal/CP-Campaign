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
    
    int x, n; cin >> x >> n;
    
    int sum = x;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sum += x;
        sum -= a;
    }
    cout << sum;
    
    return 0;
}