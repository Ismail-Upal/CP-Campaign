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
        int n, a, b; cin >> n >> a >> b;
        if(a >= b){
            if(n % 2 == a % 2 and a % 2 == b % 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(n % 2 == b % 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}