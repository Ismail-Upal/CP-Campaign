#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    map<int, int> mp;
    for(int i = 0; i < 5; i++){
        int x; cin >> x; mp[x]++;
    }

    if(mp.size() == 2){
        int a[2], j = 0;
        for(auto i : mp) a[j++] = i.second;
        if(a[0] == 2 and a[1] == 3){cout << "Yes";}
        else if(a[0] == 3 and a[1] == 2){cout << "Yes";}
        else cout << "No";
    }
    else cout << "No";
    
    return 0;
}