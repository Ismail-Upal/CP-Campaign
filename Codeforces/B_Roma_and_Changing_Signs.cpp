#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int neg = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] <= 0) neg++;
    }

    sort(v.begin(), v.end());
    ll sum = 0;
    if(neg >= k){
        for(int i = 0; i < n; i++){
            if(k > 0) sum += abs(v[i]);
            else sum += v[i];
            k--;
        }
    }
    else{
        k -= neg; int mn = 1e9;
        for(int i = 0; i < n; i++){
            sum += abs(v[i]);
            mn = min(mn, abs(v[i]));
        }
        if(k % 2) sum -= 2 * mn;
    }
    cout << sum;
    
    return 0;
}