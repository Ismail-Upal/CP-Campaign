#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    int n; cin >> n;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    auto cmp = [](string a, string b){
        return a+b < b+a;
    };
    sort(s.begin(), s.end(), cmp);
    for(auto i : s)cout << i;
    return 0;
}