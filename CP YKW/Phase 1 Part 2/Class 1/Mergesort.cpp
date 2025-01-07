#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
const int N = 1e5;
vector<int>a(N), b(N);
void merge(int l, int r){
    if(l >= r) return;
    int mid = (l + r) /2 ;
    merge(l, mid);
    merge(mid + 1, r);

    int lp = l, rp = mid + 1;
    for(int i = l; i <= r; i++){
        if(lp > mid) b[i] = a[rp++];
        else if(rp > r) b[i] = a[lp++];
        else if(a[lp] <= a[rp]) b[i] = a[lp++];
        else b[i] = a[rp++];
    }
    for(int i = l; i <= r; i++) a[i] = b[i];
}
int32_t main()
{   
    opt();
    int x, n = 0;
    while(cin >> x){
        n++;
        a[n] = x;
    }
    merge(1, n);
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}