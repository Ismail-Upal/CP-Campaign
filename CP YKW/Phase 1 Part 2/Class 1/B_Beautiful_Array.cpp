#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n, k, b, s; cin >> n >> k >> b >> s;
        int mul = b * k;
        if(mul > s){
            cout << -1 << endl; continue;
        }
        int x = s / n;
        if(x * n == s){
            while(n--) cout << x << " ";
            cout << endl;
        }
        else{
            int df = s - (x * n);
            cout << df + x << " ";
            n--;
            while(n--) cout << x << " ";
            cout << endl;
        }
    }
    
    return 0;
}