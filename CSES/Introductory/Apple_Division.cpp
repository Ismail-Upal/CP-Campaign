#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
const int N = 22;
int n;
vector<int>v(N);
ll ans = INT_MAX;
void add(int i, ll sum1 , ll sum2){
    if(i == n){
        ans = min(ans, abs(sum1 - sum2));
        return;
    }
    add(i + 1, sum1 + v[i], sum2);
    add(i + 1, sum1, sum2 + v[i]);
}
int32_t main()
{   
    opt();
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    add(0, 0, 0);
    cout << ans ;

    return 0;
}