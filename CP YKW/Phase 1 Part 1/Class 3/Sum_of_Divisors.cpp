#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e7+21;
int a[N];
int main()
{
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            a[j]++;
        }
    }
    int n; cin>>n;
    ll ans =0;
    for(int i=1; i<=n; i++){
        ans += 1LL*i*a[i];
    }
    cout<<ans<<endl;
    return 0;
}

