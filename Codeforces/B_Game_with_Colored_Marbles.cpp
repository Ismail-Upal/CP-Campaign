#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________

int32_t main()
{	opt();
 
    tc{
        int n ; cin >> n;
        vector<int> v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]] ++;
        }
        
        int alic=0, cnt = 0;
        for(auto i: mp){
            if(i.second == 1) cnt++;
            else alic++;
        }
    
        alic += ((cnt+2-1) / 2) * 2;

        cout << alic << endl;
    }
 
    return 0;
}