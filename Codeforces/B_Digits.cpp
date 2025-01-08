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
        int n, d; cin >> n >> d;
        vector<int >v;
        v.push_back(1);
        if(n >= 3 or d % 3 == 0) v.push_back(3);
        if(d==5) v.push_back(5);
        if(n >= 3 or d == 7) v.push_back(7);
        if(n >= 6 or (d % 3 == 0 and n >= 3) or d % 9 == 0) v.push_back(9);
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}