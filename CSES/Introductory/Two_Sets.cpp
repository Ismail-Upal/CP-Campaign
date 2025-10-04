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
    ll s1 = 0, s2 = 0;
    int i = n, j = n-1;
    vector<int>v1, v2;
    while(n > 0){
        if(s1 >= s2) v2.push_back(n), s2 += n;
        else v1.push_back(n), s1 += n;
        n--;
    }
    if(s1 != s2) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << sz(v1) << endl;
        for(auto i : v1) cout << i << " ";
        cout << endl << sz(v2) << endl;
        for(auto i : v2) cout << i << " ";
    }
    return 0;
}