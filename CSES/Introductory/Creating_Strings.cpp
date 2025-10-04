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
 
    string s; cin >> s;
    vector<string> v;
    sort(s.begin(), s.end());
    do{
        v.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));
    cout << sz(v) << endl;
    for(auto i : v) cout << i << endl;
    return 0;
}