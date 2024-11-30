
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const int N = 1e7+3;
ll a[N];
ll pre_a[N];
ll pre_b[N];
int main()
{
    optimize();
 
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        pre_a[i] = pre_a[i-1] + a[i];
    }

    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++){
        pre_b[i] = pre_b[i-1] + a[i];
    }

    // for(int i = 1; i<=n; i++)cout<<pre_b[i]<<' ';
    // cout<<endl;
    int m; cin>>m;
    while(m--){
        int t, l, r; cin>>t>>l>>r;
        if(t==1)cout<<pre_a[r]-pre_a[l-1]<<endl;
        else cout<<pre_b[r]-pre_b[l-1]<<endl;
    }


    return 0;
}