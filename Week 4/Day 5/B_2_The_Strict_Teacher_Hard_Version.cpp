#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5+23;
int v[N];
void merge(int l, int r, int mid){
    int l_sz=mid-l+1;
    int L[l_sz+1];
    int r_sz = r-mid;
    int R[r_sz+1];
    for(int i=0; i<l_sz; i++){
        L[i]=v[i+l];
    }
    for(int i=0; i<r_sz; i++){
        R[i]=v[i+mid+1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i=0, r_i=0;
    for(int i=l; i<=r; i++){
        if(L[l_i] <= R[r_i]){
            v[l]=L[l_i];
            l_i++;
        }
        else{
            v[i]=R[r_i];
            r_i++;
        }
    }
}
void merge_sort(int l, int r){
    if(l==r) return ;
    int mid=(l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1, r);
    merge(l, r, mid);
}
int main()
{
    optimize();
    int n; cin>>n;
    for(int i=0; i<n; i++)cin>>v[i];
    merge_sort(0, n-1);
    for(int i=0; i<n; i++)cout<<v[i]<<" ";
    return 0;
}