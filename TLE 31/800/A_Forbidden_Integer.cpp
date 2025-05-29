#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
vector<int> v;
int partition(int l, int r){
    int piv = v[r];
    int i = l;
    for(int j = l; j < r; j++){
        if(v[j] < piv){
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[r]);
    return i;
}
void quick_sort(int l, int r){
    if(l < r){
        int piv = partition(l, r);
        quick_sort(l, piv - 1);
        quick_sort(piv + 1, r);
    }
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    quick_sort(0, n - 1);
    for(int i = 0; i < n; i++) cout << v[i] <<  ' ';
    
    return 0;
}