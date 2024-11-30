#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n] ;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans=0, cnt=0;
        for(int i=0; i<n;i++){
            if(a[i]==1){
                cnt++;
            }
            else{
                ans+=cnt*(cnt+1)/2;
                cnt=0;
            }
        }
        cout<<ans+(cnt*(cnt+1)/2)<<endl;
    }
    return 0;
}