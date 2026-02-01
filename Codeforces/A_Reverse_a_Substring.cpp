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
 
    int n; cin >> n;
    string s; cin >> s;
    int f = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] > s[i + 1]){
            cout << "YES" << endl;
            cout << i+1 << " " << i + 2 << endl;
            f = 1;
            break;
        }
    }
    if(!f) cout << "NO" ;
    return 0;
}