#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    int ans = 0, mins = 0;
    while(1){
        mins += mp[ans];

        if(!mp[ans]) break;
        if(mins >= k){
            ans++;
            mins -= k;
        }
        else break;
    }

    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}