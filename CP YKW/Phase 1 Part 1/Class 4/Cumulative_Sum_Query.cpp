
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
 
    int n; cin>>n;
    int a[n+1], pre[n+1];
    int suff[n+1];
    pre[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        pre[i] = a[i] + pre[i-1];
    }
    
    suff[n]=a[n];
    for(int i=n-1; i>0; i--){
        suff[i] = suff[i+1] + a[i];
    }
    
    int q; cin>>q;
    while(q--){
        int l, r; cin>>l>>r; 
        l++; r++;
        cout<<suff[l] - suff[r+1]<<endl;
    }

    return 0;
}