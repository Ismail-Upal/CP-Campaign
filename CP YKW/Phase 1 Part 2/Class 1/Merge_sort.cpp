#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
const int N = 2e6+3;
int v[N];
vector<int> merge(vector<int>&l, vector<int> &r){
    vector<int> ans;
    int i = 0, j = 0;
    while(i < l.size() and j < r.size()){
        if(l[i] < r[j])ans.push_back(l[i++]);
        else ans.push_back(r[j++]);
    }
    while(i < l.size())ans.push_back(l[i++]);
    while(j < r.size())ans. push_back(r[j++]);
    return ans;

}
vector<int> merge_sort(int l, int r){
    if(l == r) return vector<int> ({v[l]});   
    int mid = l + (r - l) / 2;
    auto L = merge_sort(l , mid);
    auto R = merge_sort(mid + 1, r);

    return merge(L , R);
}
int32_t main()
{	opt();
    int n; cin>>n;

    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> ans = merge_sort(0, n-1);

    for(auto i: ans )cout<<i<<' ';
 
    return 0;
}