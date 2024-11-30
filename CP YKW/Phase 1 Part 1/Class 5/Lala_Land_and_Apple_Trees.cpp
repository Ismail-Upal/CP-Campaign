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
    deque<pair<int,int>> dq1, dq2;
    int n; cin >> n; 
    while(n--){
        int x, a; cin>>x>>a;
        if(x>0)dq1.push_back({x,a});
        else dq2.push_back({-x,a});
    }

    sort(dq1.begin(), dq1.end());
    sort(dq2.begin(), dq2.end());

    ll ans =0;
    if(dq1.size() > dq2.size() and dq2.size()!=0){
        while(!dq1.empty()){
            ans += dq1.front().second;
            dq1.pop_front();

            if(!dq2.empty()){
                ans+=dq2.front().second;
                dq2.pop_front();
            }
            else break;
        }
    }
    else if(dq2.size() > dq1.size() and dq1.size()!=0){
        while(!dq2.empty()){
            ans += dq2.front().second;
            dq2.pop_front();

            if(!dq1.empty()){
                ans+= dq1.front().second;
                dq1.pop_front();
            }
            else break;
        }
    }
    else if(dq2.size() == dq1.size() and dq1.size()!=0){
        while(!dq2.empty()){
            ans += dq2.front().second;
            dq2.pop_front();

            if(!dq1.empty()){
                ans+= dq1.front().second;
                dq1.pop_front();
            }
        }
    }
    else if(dq1.size()==0) ans+=dq2.front().second;
    else if(dq2.size()==0) ans+=dq1.front().second;
    cout<<ans<<endl;
    return 0;
}