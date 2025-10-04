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
    if(n <= 3 and n > 1) cout << "NO SOLUTION" << endl;
    else{
        for(int i = 2; i <= n; i+=2)cout << i << " ";
        for(int i = 1; i <= n; i+=2)cout << i << " ";
    }
    
    return 0;
}