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
 
    map<int, int> mp;
    int n; cin >> n;
    while(n --){
        int x; cin >> x;
        mp[x]++;
    }
    for(int i = 0; i < 100; i++){
        while(mp[i] > 0){
            cout << i << " ";
            mp[i]--;
        }
    }
    return 0;
}