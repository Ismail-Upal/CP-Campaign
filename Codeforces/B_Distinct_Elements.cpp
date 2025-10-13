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
        int n; cin >> n;
        vector<ll> b(n + 1);
        for(int i = 1; i <= n; i++) cin >> b[i];
        vector<ll> a(n + 1);
        ll next = 1;
        for(int i = 1; i <= n; i++){
            ll dif = b[i] - b[i - 1];
            ll j = i - dif;

            if(j == 0) a[i] = next++;
            else a[i] = a[j];

        }

        for(int i = 1; i <= n; i++) cout << a[i] << " " ;
        cout << endl;
    }
    
    return 0;
}