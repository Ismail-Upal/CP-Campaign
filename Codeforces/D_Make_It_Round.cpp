#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, m; cin >> n >> m;
    ll cnt2 = 0, cnt5 = 0, z = n;
    
    while(n > 0 and n % 2 == 0){
        cnt2++;
        n /= 2;
    }
    while(n > 0 and n % 5 == 0){
        cnt5++;
        n /= 5;
    }

    ll k = 1;
    while(cnt2 < cnt5 and k * 2 <= m){
        cnt2++;
        k *= 2;
    }
    while(cnt2 > cnt5 and k * 5 <= m){
        cnt5++;
        k *= 5;
    }

    while(k * 10 <= m) k *= 10;

    if(k == 1) cout << z * m << endl;
    else{
        k *= m / k;
        cout << z * k << endl;
    }
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