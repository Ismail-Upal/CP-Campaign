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
    
    int n; cin >> n;
    vector<int> a(n), b(n);
    map<int, int> mpa, mpb;
    for(int i = 0; i < n; i++){
        cin >> a[i]; mpa[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        cin >> b[i]; mpb[b[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mpa[a[i]] >= 2 and mpb[b[i]] >= 2){
            swap(a[i], b[i]);
            mpa[a[i]]--; mpa[b[i]]++;
            mpb[a[i]]++; mpb[b[i]]--;
        }
    }
    cout << sz(mpa) + sz(mpb) << endl;
    for(auto i : a) cout << i << " ";
    cout << endl;
    for(auto i : b) cout << i << " ";
    
    return 0;
}